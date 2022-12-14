#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	 size_t i;
	 list_t *new_node;
	 list_t *temp = *head;

	 i = 0;
	 while (str[i])
		 i++;
	 new_node = malloc(sizeof(list_t));

	 if (new_node == NULL)
		 return (NULL);

	 new_node->str = strdup(str);
	 new_node->len = i;
	 new_node->next = NULL;

	 if (*head == NULL)
	 {
		 *head = new_node;
		 return (new_node);
	 }

	 while (temp->next)
		 temp = temp->next;

	 temp->next = new_node;
	 return (new_node);
}
