#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
