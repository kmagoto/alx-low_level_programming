#include "holberton.h"

/**
 *_memset - func to fill memory with a constant value
 *@s: pointer to memory area
 *@n: number of bytes to fill
 *@b: constant byte/value
 *Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			*(s + i) = b; /* also s[i] = b;*/
		}
	}

	return (s);
}
