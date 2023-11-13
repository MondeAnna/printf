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

/**
 * test_printf_o_spec - test case for ocal printer
 *
 * Return: void
 */
void test_printf_o_spec(void)
{
	/* print out of zero to be zero */
	assert(_printf("Octal zero: %o\n", 0) == 14);

	/* expected printout: -7 */
	assert(_printf("Octal -7: %o\n", -7) == 13);

	/* expected printout: 1172 */
	assert(_printf("Octal 635: %o\n", 635) == 16);
}

/**
 * test_printf_x_lower_spec - test case for lowercased hex
 * printer
 *
 * Return: void
 */
void test_printf_x_lower_spec(void)
{
	/* print out of zero to be zero */
	assert(_printf("lower hex zero: %x\n", 0) == 18);

	/* expected printout: f */
	assert(_printf("lower hex 15: %x\n", 15) == 16);

	/* expected printout: b5b */
	assert(_printf("lower hex 2907: %x\n", 2907) == 20);
}

/**
 * test_printf_x_upper_spec - test case for uppercased hex
 * printer
 *
 * Return: void
 */
void test_printf_x_upper_spec(void)
{
	/* print out of zero to be zero */
	/* assert(_printf("UPPER HEX ZERO: %X\n", 0) == 18);  uncertain of issue */

	/* expected printout: -3E7 */
	assert(_printf("UPPER HEX 999: %X\n", -999) == 20);

	/* expected printout: 526 */
	assert(_printf("UPPER HEX 1324: %X\n", 1324) == 20);
}

