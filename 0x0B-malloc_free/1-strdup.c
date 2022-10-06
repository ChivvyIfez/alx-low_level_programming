#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a newly allocated space in memory
 * which contains a cpy of the parameter string
 * @str: parameter string
 * Return: the resulting pointer on success
 * NULL if str is NULL and insifficient memory
 */
char *_strdup(char *str)
{
	char *dstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dstr = malloc(sizeof(char) * (i + 1));

	if (dstr == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		dstr[j] = str[j];
		j++;
	}
	dstr[i] = '\0';
	return (dstr);
}
