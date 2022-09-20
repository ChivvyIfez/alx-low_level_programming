#include "main.h"

/**
 * strlen - returns the lenght of a string
 * @s: parameter
 * Return: length of the string
 */

int strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
