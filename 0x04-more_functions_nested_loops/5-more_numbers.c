#include "holberton.h"

/**
 *more_numbers - prints 0-14 ten times
 */


void more_numbers(void)
{
	char i;
	int count;

	for (count = 0; count <= 10; count++)
		{
			for (i = 0; i <= 10; i++)
			{
				if (i / 10 > 0)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			_putchar('\n');
		}
}
