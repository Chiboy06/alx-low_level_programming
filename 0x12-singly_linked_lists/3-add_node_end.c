#include "lists.h"
#include <stdlib.h>
/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;
	if (!new_node)
	{
		return NULL;
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return NULL;
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return new_node;
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return new_node;
}
