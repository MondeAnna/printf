#include "main.h"

/**
 * _strlen - char count of str
 * @str: str being measured
 * Return: num of bytes up to first null
 * byte char of str (int)
 */
int _strlen(char *str)
{
	if (!(*str))
		return (0);
	return (_strlen(++str) + 1);
}
