#include "test_main.h"

/**
 * test_printf_no_spec - no specifiers in format
 * Return: void
 */
void test_printf_no_spec(void)
{
	assert(_printf("string\n") == 7);
}

/**
 * test_printf_s_spec - s specifier in format
 * Return: void
 */
void test_printf_s_spec(void)
{
	assert(_printf("this %s\n", "string") == 12);
}
