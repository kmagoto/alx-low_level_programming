#include "holberton.h"
#include <stdio.h>

/**
 * main - print program's name
 * @argc: argument counter
 * @argv: pointer to arrays of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
