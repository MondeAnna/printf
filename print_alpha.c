#include "main.h"

/**
 * print_char - char printer
 * @args: va list with char being printed
 *
 * Return: one on success, else zero (int)
 */
int print_char(va_list args)
{
	int len = 1;
	char c;

	c = va_arg(args, int);

	return (write(FILE_DESCRIPTOR, &c, len));
}

/**
 * print_format - format printer
 * @str: format str being printed
 * @len: portion of format string to print
 *
 * Return: num of byte printed (int)
 */
int print_format(char *str, int len)
{
	return (write(FILE_DESCRIPTOR, str, len));
}

/**
 * print_str - str printer
 * @args: va list with str being printed
 *
 * Return: num of byte printed (int)
 */
int print_str(va_list args)
{
	char *str;
	int len;

	str = va_arg(args, char *);

	len = _strlen(str);

	return (write(FILE_DESCRIPTOR, str, len));
}
