#include "holberton.h"

/**
 *_islower - checks for lowercase letters
 *@c: the character to check for lowercase letters
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('n');
}
