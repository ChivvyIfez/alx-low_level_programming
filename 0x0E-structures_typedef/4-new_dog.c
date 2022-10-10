#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: whose
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, ln, lo;

	struct dog *d = NULL;

	ln = 0;
	while (name[ln] != '\0')
		ln++;
	lo = 0;
	while (owner[lo] != '\0')
		lo++;
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(ln + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc(lo + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	i = 0;
	while (i <= ln)
	{
		d->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i <= lo)
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->age = age;
	return (d);
}
