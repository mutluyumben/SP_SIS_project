cmake_minimum_required(VERSION 3.10)

project(SP_SIS_project)

# C++ Standart Ayarı
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



# 1. Gerekli Paketler (PostgreSQL)
find_package(PkgConfig REQUIRED)
pkg_check_modules(PQXX REQUIRED libpqxx)

# 2. GoogleTest'i Getir (FetchContent)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# Windows uyumu icin
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# 3. Ayarlar
include_directories(include ${PQXX_INCLUDE_DIRS})
link_directories(${PQXX_LIBRARY_DIRS})

# 4. Ana Uygulama (sis_app)
add_executable(sis_app src/main.cpp src/Student.cpp src/Database.cpp)
target_link_libraries(sis_app ${PQXX_LIBRARIES})

# 5. Test Uygulamasi (sis_test)
enable_testing()
add_executable(sis_test tests/test_main.cpp src/Student.cpp)
target_link_libraries(sis_test GTest::gtest_main)

# Testi kaydet
add_test(NAME StudentTest COMMAND sis_test)
develop
