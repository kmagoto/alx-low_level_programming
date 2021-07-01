#include "holberton.h"

/**
 * cap_string - capitalizes the first letter in each word
 * @s: string to manipulate
 * Return: a string
 */

char *cap_string(char *s)
{
	int i = 0;

	/*checking the first item for caps*/
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	i++;

	while (s[i] != '\0') /*iterates through the string*/
	{
		/*capitalizes if lowercase and prior char is separator*/
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t' ||
			s[i - 1] == '\n'))
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}
