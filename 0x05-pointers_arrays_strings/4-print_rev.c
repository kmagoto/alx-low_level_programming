#include "holberton.h"

/**
 *print_rev - prints a string in reverse
 *@s: string character
 *Return: 0
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to character before null character*/

	s--;

	/*print reversed string*/

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
