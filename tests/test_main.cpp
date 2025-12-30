#include <gtest/gtest.h>
#include "../include/Student.h"

// Test 1: Ogrenci nesnesi dogru olusuyor mu?
TEST(StudentTest, ConstructorTest) {
    Student s(1, "Ahmet", "Yilmaz", 101);
    
    EXPECT_EQ(s.getId(), 1);
    EXPECT_EQ(s.getName(), "Ahmet");
    EXPECT_EQ(s.getSurname(), "Yilmaz");
    EXPECT_EQ(s.getStudentNumber(), 101);
}

// Test 2: Farkli bir ogrenci
TEST(StudentTest, AnotherStudentTest) {
    Student s(2, "Ayse", "Demir", 202);
    EXPECT_EQ(s.getName(), "Ayse");
    EXPECT_EQ(s.getStudentNumber(), 202);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
