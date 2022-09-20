#include <unistd.h>

/**
 * _putchar - writes the character a to stdout
 * @a: The character to print 
 *
 * Return: On success 1.
 * On error, _1 is returned, and errno is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &c, 1));
}
