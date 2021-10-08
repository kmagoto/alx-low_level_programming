#include "holberton.h"
#define NULL 0

/**
 *_strchr - locates a charcater in a string
 *@s: string to search
 *@c: character to locate
 *Return: pointer to firsr occurence of char or NULL if char not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /*also (*(s + i) && *(s + i) != c) */
	{
		i++;
	}

	if (s[i] == c) /* also (*(s + i) == c) */
	{
		return (&s[i]); /*also return (s + i); */
	}

	else
	{
		return (NULL);
	}
}
