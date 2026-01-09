#include "Database.h"
#include <iostream>

Database::Database(const std::string& connStr) : connectionString(connStr) {}

Database::~Database() {
    disconnect();
}

bool Database::connect() {
    try {
        conn = std::make_unique<pqxx::connection>(connectionString);
        if (conn->is_open()) {
            std::cout << "Veritabanina Baglanildi: " << conn->dbname() << std::endl;
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
        conn->close();
        std::cout << "Baglanti Kapatildi." << std::endl;
    }
}

bool Database::isConnected() const {
    return conn && conn->is_open();
}

void Database::createTable() {
    if (!conn || !conn->is_open()) return;

    try {
        pqxx::work W(*conn);
        std::string sql = "CREATE TABLE IF NOT EXISTS students (" \
                          "id SERIAL PRIMARY KEY," \
                          "name VARCHAR(50) NOT NULL," \
                          "surname VARCHAR(50) NOT NULL," \
                          "student_number INT UNIQUE NOT NULL," \
                          "grade FLOAT);";
        W.exec(sql);
        W.commit();
        std::cout << "Tablo 'students' hazir." << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Tablo Hatasi: " << e.what() << std::endl;
    }
}

pqxx::connection* Database::getConnection() {
    return conn.get();
}
