#include "main.h"

/**
 * print_bin - prints binary digits
 * @args: va list with num being printed
 *
 * Return: num of digits int bin value (int)
 */
int print_bin(va_list args)
{
	int num = va_arg(args, int);

	return (print_bin_helper(num));
}
/**
 * print_bin_helper - helper to bin digit printer
 * @num: num being printed
 *
 * Return: num of digits int bin value (int)
 */
int print_bin_helper(int num)
{
	int count = 0;
	char digit;

	if (num >> 1 >= 1)
		count += print_bin_helper(num >> 1);

	digit = (num & 1) ? '1' : '0';

	return (write(FILE_DESCRIPTOR, &digit, 1) + count);
}

/**
 * print_int - prints integer
 * @args: va_list containing int
 *
 * Return: integer char count (int)
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);

	return (print_int_helper(num));
}

/**
 * print_int_helper - prints integer
 * @num: int being printed
 *
 * Return: integer char count (int)
 */
int print_int_helper(int num)
{
	int len = 1;

	int base = 10;
	int count = 0;

	char digit;

	if (num < 0)
	{
		/* replace with print_char */
		count += write(FILE_DESCRIPTOR, "-", len);
		num = -num;
	}

	if (num >= base)
		count += print_int_helper(num / base);

	digit = '0' + (num % base);

	return (write(FILE_DESCRIPTOR, &digit, len) + count);
}

/**
 * print_unsigned_int - prints unsigned integer
 * @num: unsigned integer
 *
 * Return: integer char count (int)
 */
int print_unsigned_int(unsigned int num)
{
	const unsigned int base = 10;
	const int len = 1;

	int count = 0;
	char digit;

	if (num >= base)
		count += print_unsigned_int(num / base);

	digit = '0' + (num % base);

	return (write(FILE_DESCRIPTOR, &digit, len) + count);
}

/**
 * print_hex - prints integer as hex
 * @specifier: hex casing
 * @num: unsigned integer
 *
 * Return: hex char count (int)
 */
int print_hex(const char specifier, int num)
{
	int len = 1;

	int base = 16;
	int count = 0;

	char hex_start;
	char digit;

	if (num < 0)
	{
		/* replace with print_char */
		count += write(FILE_DESCRIPTOR, "-", len);
		num = -num;
	}

	if (num >= base)
		count += print_hex(specifier, num / base);

	num %= base;

	if (num <= 10)
	{
		digit = '0' + num;
		return (write(FILE_DESCRIPTOR, &digit, len) + count);
	}

	hex_start = specifier == 'x' ? 'a' : 'A';
	digit = hex_start + (num % 10);

	return (write(FILE_DESCRIPTOR, &digit, len) + count);
}

/**
 * print_oct - prints integer as hex
 * @num: unsigned integer
 *
 * Return: hex char count (int)
 */
int print_oct(int num)
{
	int len = 1;

	int base = 8;
	int count = 0;

	char digit;

	if (num < 0)
	{
		/* replace with print_char */
		count += write(FILE_DESCRIPTOR, "-", len);
		num = -num;
	}

	if (num >= base)
		count += print_oct(num / base);

	num %= base;

	if (num <= base)
	{
		digit = '0' + num;
		return (write(FILE_DESCRIPTOR, &digit, len) + count);
	}

	digit = (num % base);

	return (write(FILE_DESCRIPTOR, &digit, len) + count);
}
