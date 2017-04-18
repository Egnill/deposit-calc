#include <deposit.h>
#include <ctest.h>

CTEST(logic_suite, corect_wrong)
{
	//Given
	const int vklad_test = 9000;
    const int day_test = -1;

    // When
    const int result = corect(vklad_test, day_test);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, corect_wrong_1)
{
	//Given
	const int vklad_test = 5;
    const int day_test = 5;

    // When
    const int result = corect(vklad_test, day_test);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, corect_wrong_2)
{
	//Given
	const int vklad_test = 10000;
    const int day_test = 84;

    // When
    const int result = corect(vklad_test, day_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, corect_wrong_3)
{
	//Given
	const int vklad_test = 10000;
    const int day_test = 456;

    // When
    const int result = corect(vklad_test, day_test);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, corect_wrong_4)
{
	//Given
	const int vklad_test = -9000;
    const int day_test = 89;

    // When
    const int result = corect(vklad_test, day_test);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}