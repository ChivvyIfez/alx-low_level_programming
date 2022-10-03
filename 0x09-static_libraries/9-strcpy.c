#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * @dest: buffer
 * @src: string
 * Return: returns the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
