#include "test_main.h"

/**
 * test_printf_no_spec - no specifiers in format
 *
 * Return: void
 */
void test_printf_no_spec(void)
{
	assert(_printf("string\n") == 7);
}

/**
 * test_printf_c_spec - c specifier in format
 *
 * Return: void
 */
void test_printf_c_spec(void)
{
	assert(_printf("I am ME%c\n", '!') == 9);
}

/**
 * test_printf_s_spec - s specifier in format
 *
 * Return: void
 */
void test_printf_s_spec(void)
{
	assert(_printf("this %s\n", "string") == 12);
}

/**
 * test_printf_i_d_spec - int specifier in format
 *
 * Return: void
 */
void test_printf_i_d_spec(void)
{
	assert(_printf("Ten: %d\n", 10) == 8);
	assert(_printf("One: %i\n", 1) == 7);
}

/**
 * test_printf_b_spec - test case for binary printer
 *
 * Return: void
 */
void test_printf_b_spec(void)
{
	/* expected printout: 0 */
	assert(_printf("Bin 0: %b\n", 0) == 9);

	/* expected printout: 11 */
	assert(_printf("Bin 3: %b\n", 3) == 10);

	/* expected printout: 111 */
	assert(_printf("Bin 7: %b\n", 7) == 11);

	/* expected printout: 1010 */
	assert(_printf("Bin 10: %b\n", 10) == 13);

	/* expected printout: 100101 */
	assert(_printf("Bin 37: %b\n", 37) == 15);
}
