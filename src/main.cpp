#include "Database.h"
#include "Student.h"
#include <iostream>

int main() {
  // Docker Compose ayarlarına göre bağlantı
  // docker-compose.yml'deki değerler: sis_db, sis_user, sis_password, db
  // (host), 5432
  Database db("sis_db", "sis_user", "sis_password", "db", 5432);

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
    std::cout << "4. Bilgi Guncelle\n";
    std::cout << "5. Cikis\n";
    std::cout << "Seciminiz: ";
    std::cin >> choice;

    if (choice == 4)
      break;

    if (choice == 1) {
      std::string name, surname;
      int no;
      std::cout << "Ad: ";
      std::cin >> name;
      std::cout << "Soyad: ";
      std::cin >> surname;
      std::cout << "Ogrenci No: ";
      std::cin >> no;
      db.addStudent(Student(0, name, surname, no));
    } else if (choice == 2) {
      int no;
      std::cout << "Silinecek No: ";
      std::cin >> no;
      db.deleteStudent(no);
    } else if (choice == 3) {
      auto students = db.getAllStudents();
      std::cout << "\n--- OGRENCI LISTESI ---\n";
      for (const auto &s : students) {
        s.display();
      }
    } else if (choice == 4) {
      int no;
      std::string newName, newSurname;
      std::cout << "Guncellenecek Ogrenci No: ";
      std::cin >> no;
      std::cout << "Yeni Ad: ";
      std::cin >> newName;
      std::cout << "Yeni Soyad: ";
      std::cin >> newSurname;
      db.updateStudent(no, newName, newSurname);
    }
  }

  db.disconnect();
  std::cout << "Ogrenci Bilgi Sistemi (SIS) kapandi." << std::endl;
  return 0;
}
