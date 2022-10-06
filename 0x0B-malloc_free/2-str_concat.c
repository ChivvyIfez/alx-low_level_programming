#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: resulting pointer, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cstr;
	unsigned int i, j, size, size1, sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = 0;
	while (s1[size] != '\0')
		size++;
	size1 = 0;
	while (s2[size1] != '\0')
		size1++;

	sum = size + size1;

	cstr = malloc(sizeof(char) * sum + 1);

	if (cstr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		cstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= sum)
	{
		cstr[i] = s2[j];
		i++;
		j++;
	}
	return (cstr);
}
