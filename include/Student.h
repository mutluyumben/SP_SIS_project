#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <pqxx/pqxx>

class Student {
private:
    int id;
    std::string name;
    std::string surname;
    int studentNumber;

public:
    // Kurucu
    Student(int id, std::string name, std::string surname, int studentNumber);

    // Getterlar
    int getId() const;
    std::string getName() const;
    std::string getSurname() const;
    int getStudentNumber() const;

    // Yazdirma
    void display() const;

    // --- VERITABANI ISLEMLERI (Static) ---
    static void addStudent(pqxx::connection* conn, std::string name, std::string surname, int number, float grade);
    static void getAllStudents(pqxx::connection* conn);
    static void updateStudentGrade(pqxx::connection* conn, int number, float newGrade);
    static void deleteStudent(pqxx::connection* conn, int number);
};

#endif
