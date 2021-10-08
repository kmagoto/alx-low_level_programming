#include <stdlib.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a func given as a parameter on each array element
 * @array: array
 * @size: size of array
 * @action: pointer to func to be executed
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /*match data type*/

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
