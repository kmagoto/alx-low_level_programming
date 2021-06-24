#include "holberton.h"

/**
 *print_line - draws straight line in the terminal
 *
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
