#include "holberton.h"

/**
 *print_alphabet - prints alphabets in lowercase
 *Return: Always zero
 */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
