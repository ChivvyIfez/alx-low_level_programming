#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes in s which consist only bytefrom accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
			}
		}
		j = 0;

		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
}
