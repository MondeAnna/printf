#include "test_main.h"

/**
 * main - test entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	/* alphabet */
	test_print_char();
	test_print_str();

	/* digits: base 10 */
	test_print_int();
	test_print_unsigned_int();

	/* digits: variadic base */
	test_print_bin();
	test_print_hex();
	test_print_oct();

	/* _printf */
	test_printf_no_spec();

	return (EXIT_SUCCESS);
}
