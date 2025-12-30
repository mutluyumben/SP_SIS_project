#include "Database.h"
#include <iostream>

Database::Database(const std::string& dbName, const std::string& user, const std::string& password, const std::string& host, int port) {
    connectionString = "dbname=" + dbName + " user=" + user + " password=" + password + " host=" + host + " port=" + std::to_string(port);
}

bool Database::connect() {
    try {
        conn = std::make_unique<pqxx::connection>(connectionString);
        if (conn->is_open()) {
            std::cout << "Veritabanina basariyla baglanildi: " << conn->dbname() << std::endl;
            return true;
        } else {
            std::cout << "Veritabanina baglanilamadi!" << std::endl;
            return false;
        }
    } catch (const std::exception &e) {
        std::cerr << "Baglanti Hatasi: " << e.what() << std::endl;
        return false;
    }
}

void Database::disconnect() {
    if (conn && conn->is_open()) {
        conn->close();
        std::cout << "Baglanti kesildi." << std::endl;
    }
}

bool Database::isConnected() const {
    return conn && conn->is_open();
}
