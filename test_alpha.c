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
