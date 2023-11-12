#include "test_main.h"

/**
 * main - test entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	test_print_char();
	test_print_str();
	test_print_int();
	test_print_unsigned_int();
	test_print_bin();
	test_print_hex();

	return (EXIT_SUCCESS);
}
