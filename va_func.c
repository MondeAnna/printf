#include "main.h"

/**
 * va_char - print char from va list
 * @args: var args
 *
 * Return: 1 on success else -1 (int)
 */
int va_char(va_list *args)
{
	char c = va_arg(*args, int);

	return (_putchar(c));
}

/**
 * get_print - select specifier related printer
 * @spec: specifier
 *
 * Return: function pointer to printer
 */
int (*get_print(char spec))(va_list *args)
{
	print_t prints[] = {
		{'c', va_char},
		{'\0', NULL}
	};

	int i = 0;

	while (prints[i].spec)
	{
		if (spec == prints[i].spec)
			break;
		i++;
	}

	return (prints[i].va_func);
}
