#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments
 * @argc: counter
 * @argv: pointer to arrys of args
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
