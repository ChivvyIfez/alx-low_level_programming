#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: memory area pointed to
 * @b: constant byte
 * @n: number of byte to be filled
 *
 * Return: a pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
