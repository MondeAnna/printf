#include "main.h"

/**
 * print_bin - prints binary digits
 * @num: num being printed
 * Return: num of digits int bin value (int)
 */
int print_bin(int num)
{
	int count = 0;
	char digit;

	if (num >> 1 >= 1)
		count += print_bin(num >> 1);

	digit = (num & 1) ? '1' : '0';

	return (write(1, &digit, 1) + count);
}

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
 * print_unsigned_int - prints unsigned integer
 * @num: unsigned integer
 * Return: integer char count (int)
 */
int print_unsigned_int(unsigned int num)
{
	const unsigned int base = 10;
	const int descriptor = 1;
	const int len = 1;

	int count = 0;
	char digit;

	if (num >= base)
		count += print_unsigned_int(num / base);

	digit = '0' + (num % base);

	return (write(descriptor, &digit, len) + count);
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
	int descriptor = 1;
	int len = 1;

	int base = 16;
	int count = 0;

	char hex_start;
	char digit;

	if (num < 0)
	{
		count += write(descriptor, "-", len);
		num = -num;
	}

	if (num >= base)
		count += print_hex(specifier, num / base);

	num %= base;

	if (num <= 10)
	{
		digit = '0' + num;
		return (write(descriptor, &digit, len) + count);
	}

	hex_start = specifier == 'x' ? 'a' : 'A';
	digit = hex_start + (num % 10);

	return (write(descriptor, &digit, len) + count);
}
