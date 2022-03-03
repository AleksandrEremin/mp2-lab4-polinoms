#include <gtest.h>
#include "polynomial.h"
#include "monom.h"
TEST(Monom, can_create_monom)
{
	ASSERT_NO_THROW(Monom M);
}

TEST(Monom, can_create_monom_with_value_1)
{
	ASSERT_NO_THROW(Monom M(2, 1, 2, 3));
}

TEST(Monom, can_create_monom_with_value_2)
{
	ASSERT_NO_THROW(Monom M(-12, 1, 2, 3));
}

TEST(Monom, can_create_monom_with_value_3)
{
	ASSERT_NO_THROW(Monom M(-12, 0, 2, 0));
}

TEST(Monom, can_create_monom_with_value_4)
{
	ASSERT_NO_THROW(Monom M(0, 9, 2, 5));
}

TEST(Monom, can_create_monom_with_double_value)
{
	ASSERT_NO_THROW(Monom M(-1.2, 1, 2, 3));
}


TEST(Monom, not_can_create_monom_with_negative_degreeX)
{
	ASSERT_ANY_THROW(Monom M(2, -1, 2, 3));
}

TEST(Monom, not_can_create_monom_with_negative_degreeY)
{
	ASSERT_ANY_THROW(Monom M(8, 1, -2, 3));
}

TEST(Monom, not_can_create_monom_with_negative_degreeZ)
{
	ASSERT_ANY_THROW(Monom M(2, 1, 2, -3));
}

TEST(Monom, can_create_monom_copy)
{
	Monom M;
	ASSERT_NO_THROW(Monom Mon(M));
}

TEST(Monom, can_compare_1)
{
	Monom M(2, 1, 2, 3);
	Monom Mon(2, 1, 2, 3);
	ASSERT_EQ(M, Mon);
}

TEST(Monom, can_compare_2)
{
	Monom M(2, 1, 2, 0);
	Monom Mon(2, 1, 2, 0);
	ASSERT_EQ(M, Mon);
}

TEST(Monom, can_compare_3)
{
	Monom M(2, 1, 2, 3);
	Monom Mon(2, 2, 2, 3);
	ASSERT_NE(M, Mon);
}

TEST(Monom, can_compare_4)
{
	Monom M(-2, 1, 2, 3);
	Monom Mon(2, 2, 2, 3);
	ASSERT_NE(M, Mon);
}

TEST(Monom, can_compare_5)
{
	Monom M(5, 1, 2, 3);
	Monom Mon(2, 1, 2, 3);
	ASSERT_NE(M, Mon);
}

TEST(Monom, copy_constructor_correctly)
{
	Monom M(1.2,5,9,2);
	Monom Mon(M);
	ASSERT_EQ(M, Mon);
}

TEST(Monom, equality_operator)
{
	Monom M(1.2, 5, 9, 2);
	Monom Mon(0,0,0,0);
	Mon = M;
	ASSERT_EQ(M, Mon);
}

TEST(Monom, function_coeff)
{
	Monom M(25, 5, 5, 10);
	double coeff = M.coeff();
	ASSERT_EQ(25, coeff);
}

TEST(Monom, function_degree)
{
	Monom M(10, 9, 5, 10);
	double coeff = M.degree();
	ASSERT_EQ(24, coeff);
}

//перегрузки операторов остались тесты для них; ++++Еще раз пройти по коду. Убрать лишние "эта ошибка была вызвана...", лишний комментарии и тд. Также, сделать удаление мономов, где коэффициент равен 0;

