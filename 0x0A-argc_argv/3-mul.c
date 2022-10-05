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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
