#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: to print the number of argument
 * @argv: single arrays of sring
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
