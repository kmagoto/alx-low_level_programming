#include "holberton.h"

/**
 *print_numbers - prints numbers from 0-9
 *@a: character to print
 *Return: 0
 */

void print_numbers(void)
{
	char i;
	for (i >= 0 && i <= 9 && i++)
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
