#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;

	}
	_putchar('\n');
}
