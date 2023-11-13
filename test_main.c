#include "test_main.h"

/**
 * main - test entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	test_printf_no_spec();
	test_printf_c_spec();
	test_printf_s_spec();

	return (EXIT_SUCCESS);
}
