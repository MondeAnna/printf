#include "main.h"

/**
 * print_char - char printer
 * @c: char being printed
 * Return: one on success, else zero (int)
 */
int print_char(char c)
{
	int descriptor = 1;
	int len = 1;

	return (write(descriptor, &c, len));
}

/**
 * test_print_char - test cases for char printer
 * Description: ensures printable ascii characters
 * work
 * to alphanumeric
 * Return: void
 */
void test_print_char(void)
{
	char *chars = "! a5~\n";

	while (*chars)
		assert(print_char(*chars++) == 1);
}

/**
 * main - entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	test_print_char();

	return (EXIT_SUCCESS);
}
