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
 * print_str - str printer
 * @args: va list with str being printed
 * Return: num of byte printed (int)
 */
int print_str(va_list args)
{
	int descriptor = 1;
	char *str;
	int len;

	str = va_arg(args, char *);

	len = _strlen(str);

	return (write(descriptor, str, len));
}
