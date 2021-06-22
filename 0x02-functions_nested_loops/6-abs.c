#include "holberton.h"

/**
 *_abs - computes absolute value of an integer
 *@n: integer argument
 *Return: 0
 */

int _abs(int a)
{
	if (a > 0)
		return (a);
	else if (a < 0)
		return (-a);

	return (0);
}
