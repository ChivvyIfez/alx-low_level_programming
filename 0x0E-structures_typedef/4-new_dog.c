#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - To copy string
 * @s: string
 * Return: resulting pointer
 */
char _strcpy(char *s)
{
	int i;
	char *d;

	i = 0;
	while (s[i])
		i++;
	d = malloc(i + 1);
	if (d)
	{
		for (; i >= 0; i--)
			d[i] = s[i];
	}
	return (d);
}

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: whose
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	d->name = _strcpy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strcpy(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
}
