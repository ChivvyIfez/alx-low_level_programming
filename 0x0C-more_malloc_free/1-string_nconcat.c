#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes concate
 * Return: resulting pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);
	if (n >= _strlen(s2))
		n = _strlen(s2);

	len = _strlen(s1) + n + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++
	}
	j = 0;
	while (j < n)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
