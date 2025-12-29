#include "../include/Student.h"

Student::Student(int id, std::string name, std::string surname, int studentNumber) {
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->studentNumber = studentNumber;
}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
std::string Student::getSurname() const { return surname; }
int Student::getStudentNumber() const { return studentNumber; }

void Student::display() const {
    std::cout << "ID: " << id 
              << " | Ad: " << name 
              << " | Soyad: " << surname 
              << " | No: " << studentNumber << std::endl;
}
