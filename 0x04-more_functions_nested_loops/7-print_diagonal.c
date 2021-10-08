#include "holberton.h"

/**
 *print_diagonal - print charcater "\" n times
 *@n: number of characters to draw
 */

void print_diagonal(int n)
{
	int draw;
	int surface;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (surface = 1; surface < draw; surface++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
