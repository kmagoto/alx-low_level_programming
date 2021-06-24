#include "holberton.h"

/**
 *print_line - draws straight line in the terminal
 *@n: number of times to print
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
