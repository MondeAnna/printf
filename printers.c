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
 * @str: str being printed
 * Return: num of byte printed (int)
 */
int print_str(char *str)
{
	int len = _strlen(str);
	int descriptor = 1;

	return (write(descriptor, str, len));
}
