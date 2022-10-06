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

	l = 0;
	k = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			l++;
			j++;
		}
		l++;
	}
	ptr = malloc((sizeof(char) * l) + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
