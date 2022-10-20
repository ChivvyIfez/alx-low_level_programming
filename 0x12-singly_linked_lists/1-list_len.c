#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t nelement;

	nelement = 0;
	while (h != NULL)
	{
		h = h->next;
		nelement++;
	}
	return (nelement);
}
