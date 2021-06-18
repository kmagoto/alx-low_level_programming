#include <stdio.h>

/**
 *main - print lowercase a-z
 *Description: Prints lowercase alphabet letters a-z
 *return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
