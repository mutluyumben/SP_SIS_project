cmake_minimum_required(VERSION 3.10)
project(StudentInformationSystem)

set(CMAKE_CXX_STANDARD 17)

# PkgConfig ile libpqxx kutuphanesini bul
# Gerekli paketler
find_package(PkgConfig REQUIRED)

# Header dosyalari
include_directories(include ${PQXX_INCLUDE_DIRS})
link_directories(${PQXX_LIBRARY_DIRS})

# Projeyi olustur (Database.cpp ve Student.cpp dahil)
add_executable(sis_app src/main.cpp src/Student.cpp src/Database.cpp)

# Kutuphaneyi bagla
target_link_libraries(sis_app ${PQXX_LIBRARIES})
# Header dosyaları nerede?
include_directories(include)

# Projeyi oluştur
add_executable(sis_app src/main.cpp src/Student.cpp)
