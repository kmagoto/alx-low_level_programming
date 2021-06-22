#include "holberton.c"

/**
 *print_last_digit - prints last digit of a number
 *@a: integer argument
 *Return: 0
 */

int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;

	_putchar('0' + (a % 10));

	return (a % 10);
}
