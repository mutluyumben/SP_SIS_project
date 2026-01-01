#include "Database.h"
#include "Student.h"
#include <iostream>
#include <pqxx/pqxx> 

int main() {
    try {
        // Compose dosyasındaki bilgilerle birebir aynı olmalı
#include <iostream>
#include "../include/Database.h"
#include "../include/Student.h"

int main() {
    // Docker Compose ayarlarina gore baglanti
    Database db("sisdb", "sisuser", "sispassword", "db", 5432);

    if (!db.connect()) {
        std::cout << "Baglanti basarisiz, cikiliyor..." << std::endl;
        return 1;
    }

    int choice;
    while (true) {
        std::cout << "\n--- OGRENCI ISLERI (SIS) ---\n";
        std::cout << "1. Ogrenci Ekle\n";
        std::cout << "2. Ogrenci Sil\n";
        std::cout << "3. Listele\n";
        std::cout << "4. Cikis\n";
        std::cout << "Seciminiz: ";
        std::cin >> choice;

        if (choice == 4) break;

        if (choice == 1) {
            std::string name, surname;
            int no;
            std::cout << "Ad: "; std::cin >> name;
            std::cout << "Soyad: "; std::cin >> surname;
            std::cout << "Ogrenci No: "; std::cin >> no;
            db.addStudent(Student(0, name, surname, no));
        } 
        else if (choice == 2) {
            int no;
            std::cout << "Silinecek No: "; std::cin >> no;
            db.deleteStudent(no);
        }
        else if (choice == 3) {
            auto students = db.getAllStudents();
            std::cout << "\n--- OGRENCI LISTESI ---\n";
            for (const auto& s : students) {
                s.display();
            }
        }
    }

    db.disconnect();
    return 0;
}        std::string connection_string = 
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
