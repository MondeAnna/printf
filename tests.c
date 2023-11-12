#include "main.h"

/**
 * test_print_char - test cases for char printer
 * Return: void
 */
void test_print_char(void)
{
	char *chars = "! a5~\n";

	while (*chars)
		assert(print_char(*chars++) == 1);
}

/**
 * test_print_str - test case for str printer
 * Return: void
 */
void test_print_str(void)
{
	assert(print_str("these\n") == 6);
}

/**
 * test_print_int - test case for int printer
 * Return: void
 */
void test_print_int(void)
{
	/* print out of zero to be zero */
	assert(print_int(0) == 1);
	print_char('\n');

	/* print out of 0 < n < 10 to be one char*/
	assert(print_int(5) == 1);
	print_char('\n');

	/* print out of n < 0 to include `-` */
	assert(print_int(-10) == 3);
	print_char('\n');

	/* print out of n digit long value is n chars */
	assert(print_int(12345) == 5);
	print_char('\n');
}

/**
 * test_print_bin - test case for binary printer
 * Return: void
 */
void test_print_bin(void)
{
	/* expected printout: 0 */
	assert(print_bin(0) == 1);
	print_char('\n');

	/* expected printout: 1 */
	assert(print_bin(1) == 1);
	print_char('\n');

	/* expected printout: 10 */
	assert(print_bin(2) == 2);
	print_char('\n');

	/* expected printout: 11 */
	assert(print_bin(3) == 2);
	print_char('\n');

	/* expected printout: 100 */
	assert(print_bin(4) == 3);
	print_char('\n');

	/* expected printout: 111 */
	assert(print_bin(7) == 3);
	print_char('\n');

	/* expected printout: 1000 */
	assert(print_bin(8) == 4);
	print_char('\n');

	/* expected printout: 1010 */
	assert(print_bin(10) == 4);
	print_char('\n');

	/* expected printout: 100000 */
	assert(print_bin(32) == 6);
	print_char('\n');

	/* expected printout: 100101 */
	assert(print_bin(37) == 6);
	print_char('\n');
}

/**
 * main - entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	test_print_char();
	test_print_str();
	test_print_int();
	test_print_bin();

	return (EXIT_SUCCESS);
}
