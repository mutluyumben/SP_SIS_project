#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <pqxx/pqxx>
#include <memory>

class Database {
private:
    std::string connectionString;
    std::unique_ptr<pqxx::connection> conn;

public:
    // Kurucu
    Database(const std::string& connStr);
    ~Database();
    
    // Baglanti Yonetimi
    bool connect();
    void disconnect();
    bool isConnected() const;

    // Tablo Olusturma
    void createTable();
    
    pqxx::connection* getConnection();
};

#endif
