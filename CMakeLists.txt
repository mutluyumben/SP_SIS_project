cmake_minimum_required(VERSION 3.10)
project(StudentInformationSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

find_package(PkgConfig REQUIRED)
pkg_check_modules(PQXX REQUIRED libpqxx)

add_executable(sis_app src/main.cpp)

target_link_libraries(sis_app ${PQXX_LIBRARIES})
