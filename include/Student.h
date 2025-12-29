#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    int id;
    std::string name;
    std::string surname;
    int studentNumber;

public:
    // Kurucu
    Student(int id, std::string name, std::string surname, int studentNumber);

    // Getter Metotları
    int getId() const;
    std::string getName() const;
    std::string getSurname() const;
    int getStudentNumber() const;

    // Bilgi Yazdırma
    void display() const;
};

#endif

