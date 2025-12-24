#include <iostream>
#include <pqxx/pqxx> 

int main() {
    try {
        // Compose dosyasındaki bilgilerle birebir aynı olmalı
        std::string connection_string = 
            "host=db port=5432 dbname=sis_db user=sis_user password=sis_password";

        pqxx::connection C(connection_string);
        
        if (C.is_open()) {
            std::cout << "BASARILI: Veritabanina baglanildi: " << C.dbname() << std::endl;
        } else {
            std::cerr << "HATA: Veritabani acilamadi!" << std::endl;
            return 1;
        }

        pqxx::work W(C);
        pqxx::result R = W.exec("SELECT version();");
        std::cout << "Postgres Versiyonu: " << R[0][0].c_str() << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "VERITABANI HATASI: " << e.what() << std::endl;
        return 1;
    }

    std::cout << "Ogrenci Bilgi Sistemi (SIS) Docker uzerinde calisiyor!" << std::endl;
    return 0;
}