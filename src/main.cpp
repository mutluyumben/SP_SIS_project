#include <iostream>
#include <thread>
#include <chrono>
#include "Database.h"
#include "Student.h"

int main() {
    std::cout << "Sistem baslatiliyor (5 saniye bekle)..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));

    // Docker Compose'daki bilgilere gore baglanti
    std::string connStr = "postgresql://sis_user:sis_password@db:5432/sis_db";
    Database db(connStr);

    if (db.connect()) {
        db.createTable();
    } else {
        std::cout << "Baglanti Basarisiz! Cikiliyor..." << std::endl;
        return 1;
    }

    int choice;
    while (true) {
        std::cout << "\n--- SIS MENU ---\n";
        std::cout << "1. Ekle\n2. Sil\n3. Listele\n4. Not Guncelle\n5. Cikis\nSecim: ";
        std::cin >> choice;

        if (choice == 5) break;

        if (choice == 1) {
            std::string n, s; int no; float g;
            std::cout << "Ad: "; std::cin >> n;
            std::cout << "Soyad: "; std::cin >> s;
            std::cout << "No: "; std::cin >> no;
            std::cout << "Not: "; std::cin >> g;
            Student::addStudent(db.getConnection(), n, s, no, g);
        }
        else if (choice == 2) {
            int no;
            std::cout << "Silinecek No: "; std::cin >> no;
            Student::deleteStudent(db.getConnection(), no);
        }
        else if (choice == 3) {
            Student::getAllStudents(db.getConnection());
        }
        else if (choice == 4) {
            int no; float g;
            std::cout << "No: "; std::cin >> no;
            std::cout << "Yeni Not: "; std::cin >> g;
            Student::updateStudentGrade(db.getConnection(), no, g);
        }
    }
    return 0;
}
