#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: string to be found
 *
 * Return: pointer at the begining of the located substring
 * or NULL if none
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
