#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - creates an array of chars, and initializes with specific char
 *@size: size of array
 *@c: character to fill array
 *
 *Return: pointer to array, Null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0) /*validate the size input*/
		return (NULL);
	arr = malloc(sizeof(char) * size); /*allocates memory*/

	if (arr == NULL) /* validate memory*/
		return (NULL);

	while (i < (int)size) /*set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
