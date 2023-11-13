#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: left operand
 * @s2: right operand
 *
 * Description: Compares two strings, returning
 * zero if the strings are the same, a negative
 * value if s1 comes before s2, lexicographically,
 * a positive value if s1 comws after s2, lexicographically
 *
 * Return: zero is the same else the integral
 * difference between the first differing chars (int)
 */
int _strcmp(char *s1, char *s2)
{
	const int len = _strlen(s1);
	int iter = 0;

	for (; iter <= len; iter++)
		if (s1[iter] != s2[iter])
			return (s1[iter] - s2[iter]);
	return (0);
}

/**
 * _strlen - char count of str
 *
 * @str: str being measured
 *
 * Return: num of bytes up to first null
 * byte char of str (int)
 */
int _strlen(char *str)
{
	if (!(*str))
		return (0);
	return (_strlen(++str) + 1);
}

/**
 * _strlen_desc - char count of str to next descriptor
 *
 * @str: str being measured
 *
 * Return: num of bytes up to first null
 * byte char of str to descriptor(int)
 */
int _strlen_desc(char *str)
{
	if (!(*str) || *str == '%')
		return (0);
	return (_strlen_desc(++str) + 1);
}
