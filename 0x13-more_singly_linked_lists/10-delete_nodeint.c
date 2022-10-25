#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t list
 * @head: pointer to the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *node = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	i = 0;
	while (i < (index - 1))
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
