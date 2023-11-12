#include "test_main.h"

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
