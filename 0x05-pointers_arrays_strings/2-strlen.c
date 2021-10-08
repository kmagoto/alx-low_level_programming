#include "holberton.h"
#include <string.h>

/**
 *_strlen - returns length of a string
 *@s: the string to check length
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
