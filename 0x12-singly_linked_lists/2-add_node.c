#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to list_t
 * @str: pionter to the new string
 * Return: address of the new string or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new_node;

	i = 0;
	while (str[i])
		i++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
