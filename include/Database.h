#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <memory>
#include <vector>
#include <pqxx/pqxx>
#include "Student.h"

class Database {
private:
    std::string connectionString;
    std::unique_ptr<pqxx::connection> conn;

public:
    Database(const std::string& dbName, const std::string& user, const std::string& password, const std::string& host, int port);
    
    bool connect();
    void disconnect();
    bool isConnected() const;

    void createTable(); 
    void addStudent(const Student& student);
    void deleteStudent(int studentNumber);
    std::vector<Student> getAllStudents();

    // --- HAFTA 4: YENI EKLENENLER ---
    void updateStudent(int studentNumber, const std::string& newName, const std::string& newSurname);
    Student findStudent(int studentNumber);
};

#endif

