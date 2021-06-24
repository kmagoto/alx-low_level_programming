#include "holberton.h"

/**
 *more_numbers - prints 0-14 ten times
 */


void more_numbers(void)
{
	char i;
	int count;

	for (i = 0; i <= 14; i++)
	{
		for (count = 0; count <= 10; count++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
