#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: the string to be printed
 *Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 *puts2 - print every second character of a string
 *@str: string to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
