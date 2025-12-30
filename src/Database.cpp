#include "Database.h"
#include <iostream>

Database::Database(const std::string& dbName, const std::string& user, const std::string& password, const std::string& host, int port) {
    connectionString = "dbname=" + dbName + " user=" + user + " password=" + password + " host=" + host + " port=" + std::to_string(port);
}

bool Database::connect() {
    try {
        conn = std::make_unique<pqxx::connection>(connectionString);
        if (conn->is_open()) {
            std::cout << "Veritabanina baglanildi: " << conn->dbname() << std::endl;
            createTable(); // Baglaninca tabloyu otomatik olustur
            return true;
        }
        return false;
    } catch (const std::exception &e) {
        std::cerr << "Baglanti Hatasi: " << e.what() << std::endl;
        return false;
    }
}

void Database::disconnect() {
    if (conn && conn->is_open()) {
 feature/docker_setup
        conn->close();


 develop
        std::cout << "Baglanti kesildi." << std::endl;
    }
}

bool Database::isConnected() const {
    return conn && conn->is_open();
}

// --- CRUD ISLEMLERI ---

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

void Database::addStudent(const Student& student) {
    try {
        pqxx::work w(*conn);
        w.exec_params("INSERT INTO students (name, surname, student_number) VALUES ($1, $2, $3)",
                      student.getName(), student.getSurname(), student.getStudentNumber());
        w.commit();
        std::cout << "Ogrenci Eklendi: " << student.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Ekleme Hatasi: " << e.what() << std::endl;
    }
}

void Database::deleteStudent(int studentNumber) {
    try {
        pqxx::work w(*conn);
        w.exec_params("DELETE FROM students WHERE student_number = $1", studentNumber);
        w.commit();
        std::cout << "Ogrenci Silindi (No: " << studentNumber << ")" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Silme Hatasi: " << e.what() << std::endl;
    }
}

std::vector<Student> Database::getAllStudents() {
    std::vector<Student> students;
    try {
        pqxx::work w(*conn);
        pqxx::result r = w.exec("SELECT id, name, surname, student_number FROM students");
        
        for (auto row : r) {
            students.emplace_back(row[0].as<int>(), row[1].as<std::string>(), row[2].as<std::string>(), row[3].as<int>());
        }
    } catch (const std::exception &e) {
        std::cerr << "Listeleme Hatasi: " << e.what() << std::endl;
    }
    return students;
}