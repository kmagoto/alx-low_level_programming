#include "holberton.h"

/**
 *swap_int - swaps the value of two ints
 *@a: first integer
 *@b: second int to be swapped
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
