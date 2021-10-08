#include "holberton.h"

/**
 *print_last_digit - prints last digit of the integer
 *@a: integer argument
 *Return: last digit of a number
 */

int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;

	_putchar('0' + (a % 10));

	return (a % 10);
}
