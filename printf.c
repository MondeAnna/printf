#include "main.h"

/**
 * _printf - print formatted string
 * @format: str format
 * Return: num of bytes printed (int)
 */
int _printf(const char *format, ...)
{
	char *str = (char *) format;
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*str)
	{
		if (*str != '%')
		{
			count += print_char(*str);
			str++;
			continue;
		}

		str += 2;
		count += print_str(args);
	}

	return (count);
}
