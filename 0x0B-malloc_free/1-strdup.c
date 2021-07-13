#include <stdlib.h>
#include "holberton.h"

/**
 *_strdup - returns a pointer to new space memory that has a copy of a string
 *@str: original string
 *
 *
 *Return: pointer to duplicated string, or NULL is insufficient memory
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* add null terminator to length*/

	duplicate_str = malloc(sizeof(char) * len); /*allocate memory*/

	if (duplicate_str == NULL) /*validate memory*/
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
