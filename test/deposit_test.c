#include <deposit.h>
#include <ctest.h>

CTEST(arithmetic_suite, income_first_if_dataFirst)
{
    // Given
    const int income_test = 100000;
    const int data_test = 5;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 90000;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataSecond)
{
    // Given
    const int income_test = 87000;
    const int data_test = 50;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 88740;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataThird)
{
    // Given
    const int income_test = 75000;
    const int data_test = 89;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 112500;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataFourth)
{
    // Given
    const int income_test = 64000;
    const int data_test = 305;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 71680;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFirst)
{
    // Given
    const int income_test = 157000;
    const int data_test = 10;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 141300;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataSecond)
{
    // Given
    const int income_test = 235000;
    const int data_test = 115;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 242050;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataThird)
{
    // Given
    const int income_test = 369000;
    const int data_test = 185;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 398520;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFourth)
{
    // Given
    const int income_test = 150000;
    const int data_test = 362;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 172500;
    ASSERT_EQUAL(expected, result);
}