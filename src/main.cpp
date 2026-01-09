#include "Database.h"
#include "Student.h"
#include <chrono>
#include <iostream>
#include <thread>


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
    std::cout
        << "1. Ekle\n2. Sil\n3. Listele\n4. Not Guncelle\n5. Cikis\nSecim: ";
    std::cin >> choice;

    if (std::cin.fail()) {
      std::cin.clear();             // Hata bayragini temizle
      std::cin.ignore(10000, '\n'); // Hatali girisi yut
      std::cout << "[HATA] Gecersiz giris yaptiniz. Lutfen tekrar deneyin.\n";
      continue;
    }

    if (choice == 5)
      break;

    try {
      if (choice == 1) {
        std::string n, s;
        int no;
        float g;
        std::cout << "Ad: ";
        std::cin >> n;
        std::cout << "Soyad: ";
        std::cin >> s;
        std::cout << "No: ";
        std::cin >> no;
        std::cout << "Not: ";
        std::cin >> g;

        if (std::cin.fail())
          throw std::runtime_error("Gecersiz veri tipi");
        Student::addStudent(db.getConnection(), n, s, no, g);
      } else if (choice == 2) {
        int no;
        std::cout << "Silinecek No: ";
        std::cin >> no;
        if (std::cin.fail())
          throw std::runtime_error("Gecersiz numara");
        Student::deleteStudent(db.getConnection(), no);
      } else if (choice == 3) {
        Student::getAllStudents(db.getConnection());
      } else if (choice == 4) {
        int no;
        float g;
        std::cout << "No: ";
        std::cin >> no;
        std::cout << "Yeni Not: ";
        std::cin >> g;
        if (std::cin.fail())
          throw std::runtime_error("Gecersiz veri");
        Student::updateStudentGrade(db.getConnection(), no, g);
      }
    } catch (...) {
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      std::cout << "[HATA] Girdiginiz veriler hatali (Orn: Not yerine harf "
                   "girdiniz).\n";
    }
  }
  return 0;
}
