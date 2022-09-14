#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet by x10 followed by a new line
 */

void print_alphabet_x10(void)
{
	char abc;
	abc = 'a';
	int j;
	j = 0;

	while ( j < 10)
	{
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		j++
	}
}
