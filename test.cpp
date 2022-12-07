#include <gtest/gtest.h>
#include "mymath.h"

TEST(OperationTests, SumTest){
    MyMath mm;
    EXPECT_EQ(mm.sum(100000, 21), 100021);
}

TEST(OperationTests, SumTestFalse){
    MyMath mm;
    EXPECT_NE(mm.sum(2,2), 5);
}

TEST(OperationTests, MultTest){
    MyMath mm;
    EXPECT_EQ(mm.mult(100000, 21), 2100000);
}

TEST(OperationTests, MultTestFalse){
    MyMath mm;
    EXPECT_NE(mm.mult(2,2), 5);
}

TEST(OperationTests, MinusTest){
    MyMath mm;
    EXPECT_EQ(mm.minus(100000, 21), 99979);
}

TEST(OperationTests, MinusTestFalse){
    MyMath mm;
    EXPECT_NE(mm.minus(2,2), 1);
}