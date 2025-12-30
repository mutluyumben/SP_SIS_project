cmake_minimum_required(VERSION 3.10)

project(SP_SIS_project)

# C++ Standart Ayarı
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Paketleri Bul (libpqxx)
find_package(PkgConfig REQUIRED)
pkg_check_modules(PQXX REQUIRED libpqxx)

# Include klasörünü tanıt
include_directories(include)
include_directories(${PQXX_INCLUDE_DIRS})

# Src klasöründeki tüm .cpp dosyalarını bul
file(GLOB SOURCES "src/*.cpp")

# Executable (Çalıştırılabilir dosya) oluştur

add_executable(sis-project-app ${SOURCES})

# Kütüphaneyi bağla
target_link_libraries(sis-project-app ${PQXX_LIBRARIES})
