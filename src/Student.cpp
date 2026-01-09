#include "Student.h"

// Kurucu
Student::Student(int id, std::string name, std::string surname, int studentNumber) {
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->studentNumber = studentNumber;
}

// Getterlar
int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
std::string Student::getSurname() const { return surname; }
int Student::getStudentNumber() const { return studentNumber; }

// Ekrana Yazdirma
void Student::display() const {
    std::cout << "ID: " << id 
              << " | Ad: " << name 
              << " | Soyad: " << surname 
              << " | No: " << studentNumber << std::endl;
}

// --- VERITABANI ISLEMLERI ---

void Student::addStudent(pqxx::connection* conn, std::string name, std::string surname, int number, float grade) {
    try {
        if (conn && conn->is_open()) {
            pqxx::work W(*conn);
            std::string sql = "INSERT INTO students (name, surname, student_number, grade) VALUES (" +
                              W.quote(name) + ", " + W.quote(surname) + ", " +
                              std::to_string(number) + ", " + std::to_string(grade) + ");";
            W.exec(sql);
            W.commit();
            std::cout << "[BASARILI] Ogrenci Eklendi: " << name << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "[HATA] Ekleme Yapilamadi: " << e.what() << std::endl;
    }
}

void Student::getAllStudents(pqxx::connection* conn) {
    try {
        if (conn && conn->is_open()) {
            pqxx::nontransaction N(*conn);
            pqxx::result R(N.exec("SELECT * FROM students;"));
            
            std::cout << "\n--- LISTE ---" << std::endl;
            for (const auto& row : R) {
                std::cout << row["name"].c_str() << " " << row["surname"].c_str() 
                          << " (No: " << row["student_number"].c_str() << ") - Not: " 
                          << row["grade"].c_str() << std::endl;
            }
            std::cout << "-------------\n" << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "[HATA] Listeleme Yapilamadi: " << e.what() << std::endl;
    }
}

void Student::updateStudentGrade(pqxx::connection* conn, int number, float newGrade) {
    try {
        if (conn && conn->is_open()) {
            pqxx::work W(*conn);
            W.exec("UPDATE students SET grade = " + std::to_string(newGrade) + 
                   " WHERE student_number = " + std::to_string(number) + ";");
            W.commit();
            std::cout << "[BASARILI] Not Guncellendi." << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "[HATA] Guncelleme Yapilamadi: " << e.what() << std::endl;
    }
}

void Student::deleteStudent(pqxx::connection* conn, int number) {
    try {
        if (conn && conn->is_open()) {
            pqxx::work W(*conn);
            W.exec("DELETE FROM students WHERE student_number = " + std::to_string(number) + ";");
            W.commit();
            std::cout << "[BASARILI] Ogrenci Silindi." << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "[HATA] Silme Yapilamadi: " << e.what() << std::endl;
    }
}
