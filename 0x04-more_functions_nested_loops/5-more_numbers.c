#include "holberton.h"

/**
 *more_numbers - prints 0-14 ten times
 */

void more_numbers(void)
{
	int count;
	char i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
