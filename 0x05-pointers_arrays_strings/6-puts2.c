#include "main.h"

/**
 * puts2 - prints character of a string starting with 1st char
 * followed by a new line
 * @str: function parameter
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
