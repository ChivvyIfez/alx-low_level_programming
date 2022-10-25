#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int node;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	node = 0;
	while (temp && node < idx)
	{
		if (node == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		node++;
	}
	return (NULL);
}
