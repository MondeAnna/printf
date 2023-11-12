#include "main.h"

/**
 * _printf - print formatted string
 * @format: str format
 * Return: num of bytes printed (int)
 */
int _printf(const char *format, ...)
{
	char *str = (char *) format;

	return (print_str(str));
}
