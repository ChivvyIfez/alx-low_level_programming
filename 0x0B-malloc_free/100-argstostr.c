#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concanates all argument of the program
 * @ac: argument count
 * @av: argument vector
 * Return: the pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, l;

	if (ac == 0 || av == 0)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			;
		l = l + k + 1;
	}
	ptr = malloc(l + 1);

	if (ptr != NULL)
	{
		for (j = 0; j < ac; j++)
		{
			for (k = 0; av[j][k]; k++, i++)
				ptr[i] = av[j][k];
			ptr[i++] = '\n';
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
