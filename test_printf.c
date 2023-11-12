#include "test_main.h"

/**
 * test_printf_no_spec - no specifiers in format
 * Return: void
 */
void test_printf_no_spec(void)
{
	assert(_printf("string\n") == 7);
}
