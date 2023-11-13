#include "main.h"

/**
 * get_printer - select printer variation
 * @spec: specifier
 *
 * Return: pointer to printer
 */
int (*get_printer(char *spec))(va_list args)
{
	print_t printers[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	int i = 0;

	while (printers[i].descriptor)
	{
		if (!_strcmp(spec, printers[i].descriptor))
			break;
		i++;
	}

	return (printers[i].execute);
}


/**
 * _printf - print formatted string
 * @format: str format
 *
 * Return: num of bytes printed (int)
 */
int _printf(const char *format, ...)
{
	char *str = (char *) format;

	int count = 0;
	int len = 0;

	va_list args;

	va_start(args, format);

	if (_strlen(str) == _strlen_desc(str))
	{
		len = _strlen(str);
		return (print_format(str, len));
	}

	while (TRUE)
	{
		len = _strlen_desc(str);
		count += print_format(str, len);
		str += len + 1;

		if (!(*str))
			break;

		if (*str == 'c')
			count += print_char(args);
		else if (*str == 's')
			count += print_str(args);
		else if (*str == 'b')
			count += print_bin(args);
		else if (*str == 'x')
			count += print_hex_lower(args);
		else if (*str == 'X')
			count += print_hex_upper(args);
		else if (*str == 'o')
			count += print_oct(args);

		str++;
	}

	va_end(args);

	return (count);
}
