cmake_minimum_required(VERSION 3.10)
project(StudentInformationSystem)

set(CMAKE_CXX_STANDARD 17)

# PkgConfig ile libpqxx kutuphanesini bul
find_package(PkgConfig REQUIRED)
pkg_check_modules(PQXX REQUIRED libpqxx)

# Header dosyalari
include_directories(include ${PQXX_INCLUDE_DIRS})
link_directories(${PQXX_LIBRARY_DIRS})

# Projeyi olustur (Database.cpp ve Student.cpp dahil)
add_executable(sis_app src/main.cpp src/Student.cpp src/Database.cpp)

# Kutuphaneyi bagla
target_link_libraries(sis_app ${PQXX_LIBRARIES})
