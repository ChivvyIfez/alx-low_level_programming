#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two number
 * @argc: argument count
 * @argv: argument Vector
 * Return: Always 0 on success, 1 on Error
 */

int main(int argc, char *argv[])
{
	int i, prod;

	prod = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod = prod * atoi(argv[i]);
			printf("%d\n", prod);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
