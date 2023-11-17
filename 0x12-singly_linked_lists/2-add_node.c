#include "lists.h"
#include <stdlib.h>
/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
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

	new_node->next = *head;
	*head = new_node;

	return new_node;
}
