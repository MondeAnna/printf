#include "test_main.h"

/**
 * main - test entry point
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	/* alphabet */
	test_printf_no_spec();
	test_printf_c_spec();
	test_printf_s_spec();

	/* digits */
	test_printf_b_spec();
	test_printf_x_lower_spec();
	test_printf_x_upper_spec();

	return (EXIT_SUCCESS);
}
