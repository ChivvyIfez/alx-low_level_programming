#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to be encode
 *
 * Return: result
 */

char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
