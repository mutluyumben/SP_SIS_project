#include "Database.h"
#include <iostream>

// Constructor - Bağlantı string'i oluşturur
Database::Database(const std::string &dbName, const std::string &user,
                   const std::string &password, const std::string &host,
                   int port) {
  connectionString = "dbname=" + dbName + " user=" + user +
                     " password=" + password + " host=" + host +
                     " port=" + std::to_string(port);
}

// Veritabanına bağlanma
bool Database::connect() {
  try {
    conn = std::make_unique<pqxx::connection>(connectionString);
    if (conn->is_open()) {
      std::cout << "Veritabanina baglanildi: " << conn->dbname() << std::endl;
      createTable(); // Bağlanınca tabloyu otomatik oluştur
      return true;
    }
    return false;
  } catch (const std::exception &e) {
    std::cerr << "Baglanti Hatasi: " << e.what() << std::endl;
    return false;
  }
}

// Bağlantıyı kesme - libpqxx 7.x'te close() kullanılır
void Database::disconnect() {
  if (conn && conn->is_open()) {
    conn->close();
    std::cout << "Baglanti kesildi." << std::endl;
  }
}

// Bağlantı durumu kontrolü
bool Database::isConnected() const { return conn && conn->is_open(); }

// --- CRUD İŞLEMLERİ ---

// Students tablosunu oluştur
void Database::createTable() {
  try {
    pqxx::work w(*conn);
    w.exec("CREATE TABLE IF NOT EXISTS students ("
           "id SERIAL PRIMARY KEY, "
           "name VARCHAR(50), "
           "surname VARCHAR(50), "
           "student_number INT UNIQUE)");
    w.commit();
  } catch (const std::exception &e) {
    std::cerr << "Tablo Olusturma Hatasi: " << e.what() << std::endl;
  }
}

// Öğrenci ekleme
void Database::addStudent(const Student &student) {
  try {
    pqxx::work w(*conn);
    w.exec_params("INSERT INTO students (name, surname, student_number) VALUES "
                  "($1, $2, $3)",
                  student.getName(), student.getSurname(),
                  student.getStudentNumber());
    w.commit();
    std::cout << "Ogrenci Eklendi: " << student.getName() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Ekleme Hatasi: " << e.what() << std::endl;
  }
}

// Öğrenci silme
void Database::deleteStudent(int studentNumber) {
  try {
    pqxx::work w(*conn);
    w.exec_params("DELETE FROM students WHERE student_number = $1",
                  studentNumber);
    w.commit();
    std::cout << "Ogrenci Silindi (No: " << studentNumber << ")" << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Silme Hatasi: " << e.what() << std::endl;
  }
}

// Tüm öğrencileri getir
std::vector<Student> Database::getAllStudents() {
  std::vector<Student> students;
  try {
    pqxx::work w(*conn);
    pqxx::result r =
        w.exec("SELECT id, name, surname, student_number FROM students");

    for (auto row : r) {
      students.emplace_back(row[0].as<int>(), row[1].as<std::string>(),
                            row[2].as<std::string>(), row[3].as<int>());
    }
  } catch (const std::exception &e) {
    std::cerr << "Listeleme Hatasi: " << e.what() << std::endl;
  }
  return students;
}