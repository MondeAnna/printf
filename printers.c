#include "main.h"

/**
 * print_int - prints integer
 * @num: integer
 *
 * Return: integer char count (int)
 */
int print_int(int num)
{
	int descriptor = 1;
	int len = 1;

	int base = 10;
	int count = 0;

	char digit;

	if (num < 0)
	{
		count += write(descriptor, "-", len);
		num = -num;
	}

	if (num >= base)
		count += print_int(num / base);

	digit = '0' + (num % base);

	return (write(descriptor, &digit, len) + count);
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
