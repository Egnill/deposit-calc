#include <deposit.h>
#include <ctest.h>

CTEST(arithmetic_suite, income_first_if_dataFirst)
{
    // Given
    const int income_test = 100;
    const int data_test = 21;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 90;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataSecond)
{
    // Given
    const int income_test = 87;
    const int data_test = 50;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 88.74;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataThird)
{
    // Given
    const int income_test = 75;
    const int data_test = 89;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 112.5;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataFourth)
{
    // Given
    const int income_test = 64;
    const int data_test = 305;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 71.68;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFirst)
{
    // Given
    const int income_test = 157;
    const int data_test = 10;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 141.3;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataSecond)
{
    // Given
    const int income_test = 235;
    const int data_test = 115;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 242.05;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataThird)
{
    // Given
    const int income_test = 369;
    const int data_test = 185;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 398.52;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFourth)
{
    // Given
    const int income_test = 741;
    const int data_test = 362;

    // When
    const int result = prover(income_test, data_test);

    // Then
    const int expected = 852.15;
    ASSERT_EQUAL(expected, result);
}