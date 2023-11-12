#include "main.h"

/**
 * _strlen - char count of str
 * @str: str being measured
 * Return: num of bytes up to first null
 * byte char of str (int)
 */
int _strlen(char *str)
{
	if (!(*str))
		return (0);
	return (_strlen(++str) + 1);
}

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
 * print_str - str printer
 * @str: str being printed
 * Return: num of byte printed (int)
 */
int print_str(char *str)
{
	int len = _strlen(str);
	int descriptor = 1;

	return (write(descriptor, str, len));
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
 * test_print_str - test case for str printer
 * Description: ensures strung ascii characters
 * operate as one body of values
 * Return: void
 */
void test_print_str(void)
{
	assert(print_str("these\n") == 6);
}

/**
 * main - entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	test_print_char();
	test_print_str();

	return (EXIT_SUCCESS);
}
