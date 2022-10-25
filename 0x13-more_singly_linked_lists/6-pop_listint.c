#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the pointer linked list
 * Return: the head node’s data (n) and 0 if empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
