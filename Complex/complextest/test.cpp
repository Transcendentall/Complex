#include "pch.h"
#include "gtest/gtest.h"
using namespace std;


TEST(Test1, TestName1) {
	complex x, y, z;
	x.a = 1;
	x.b = 0;
	y.a = 1;
	y.b = 0;
	z = x + y;
	ASSERT_DOUBLE_EQ(2, z.a);
	ASSERT_DOUBLE_EQ(0, z.b);
}
TEST(Test2, TestName2) {
	complex x, y, z;
	x.a = 13;
	x.b = 1;
	y.a = 7;
	y.b = -6;
	z = x / y;
	ASSERT_DOUBLE_EQ(1, z.a);
	ASSERT_DOUBLE_EQ(1, z.b);
}
TEST(Test3, TestName3) {
	complex x, y, z;
	x.a = 1;
	x.b = -1;
	y.a = 3;
	y.b = 6;
	z = x * y;
	ASSERT_DOUBLE_EQ(9, z.a);
	ASSERT_DOUBLE_EQ(3, z.b);
}
TEST(Test4, TestName4) {
	complex x, y, z;
	x.a = 1;
	x.b = 3;
	y.a = 4;
	y.b = -5;
	z = x + y;
	ASSERT_DOUBLE_EQ(5, z.a);
	ASSERT_DOUBLE_EQ(-2, z.b);
}
TEST(Test5, TestName5) {
	complex x, y, z;
	x.a = 0;
	x.b = 3;
	y.a = 0;
	y.b = -2;
	z = x + y;
	ASSERT_DOUBLE_EQ(0, z.a);
	ASSERT_DOUBLE_EQ(1, z.b);
}
TEST(Test6, TestName6) {
	complex x, y, z;
	x.a = 9.5;
	x.b = 3.143;
	y.a = 6.2;
	y.b = 4.143;
	z = x - y;
	ASSERT_DOUBLE_EQ(3.3, z.a);
	ASSERT_DOUBLE_EQ(-1, z.b);
}
TEST(Test7, TestName7) {
	complex x, y, z;
	x.a = 3;
	x.b = 1;
	y.a = 5;
	y.b = -2;
	z = x - y;
	ASSERT_DOUBLE_EQ(-2, z.a);
	ASSERT_DOUBLE_EQ(3, z.b);
}
TEST(Test8, TestName8) {
	complex x, y, z;
	x.a = 3;
	x.b = 1;
	y.a = 5;
	y.b = -2;
	z = x - y;
	ASSERT_DOUBLE_EQ(-2, z.a);
	ASSERT_DOUBLE_EQ(3, z.b);
}
TEST(Test9, TestName9) {
	complex x, y, z;
	x.a = 3;
	x.b = 3;
	y.a = 3;
	y.b = 3;
	z = x * y;
	ASSERT_DOUBLE_EQ(0, z.a);
	ASSERT_DOUBLE_EQ(18, z.b);
}
TEST(Test10, TestName10) {
	complex x, y, z;
	x.a = 331421;
	x.b = -12351251;
	y.a = 985211455;
	y.b = 30000002;
	z = x + y;
	ASSERT_DOUBLE_EQ(985542876, z.a);
	ASSERT_DOUBLE_EQ(17648751, z.b);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}