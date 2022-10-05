#include "main.h"
#include <stdio.h>

/**
 * main - prints its name followed by a newline
 * @argc: argument count of integer type
 * @argv: argument vector single array of strings
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
