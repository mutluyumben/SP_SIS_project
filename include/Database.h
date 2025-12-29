#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <memory>
#include <pqxx/pqxx>

class Database {
private:
    std::string connectionString;
    std::unique_ptr<pqxx::connection> conn;

public:
    Database(const std::string& dbName, const std::string& user, const std::string& password, const std::string& host, int port);
    bool connect();
    void disconnect();
    bool isConnected() const;
};

#endif
