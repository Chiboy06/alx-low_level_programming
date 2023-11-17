#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
