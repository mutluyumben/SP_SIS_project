cmake_minimum_required(VERSION 3.10)
project(StudentInformationSystem)

set(CMAKE_CXX_STANDARD 17)

# Gerekli paketler
find_package(PkgConfig REQUIRED)

# Header dosyaları nerede?
include_directories(include)

# Projeyi oluştur
add_executable(sis_app src/main.cpp src/Student.cpp)
