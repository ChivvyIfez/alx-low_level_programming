#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int i, j, k;
	char a;

	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
	}

	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		a = s[i];
		s[i] = s[k];
		s[k--] = a;
	}
}
