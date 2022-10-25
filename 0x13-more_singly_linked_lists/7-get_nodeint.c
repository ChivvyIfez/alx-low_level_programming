#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the linked list
 * @index: index of the node, starting at 0
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	i = 0;
	while ((i < index) && (head->next))
	{
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);

	return (head);
}
