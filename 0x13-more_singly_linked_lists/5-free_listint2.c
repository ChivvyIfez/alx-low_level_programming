#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to a pointer linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0 || *head == 0)
		return;

	while (*head != 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
