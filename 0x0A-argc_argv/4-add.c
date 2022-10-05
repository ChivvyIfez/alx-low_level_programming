#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adds two positive numbers
 * @argc: Argument count
 * @argv: argument vector
 * Return: sum, 0 if no number passed, 1 on Error
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
		printf("%d\n", sum);
		return (0);
}
