#include "lists.h"

/**
 * list_len - returns the length of a list;
 * @h: pointer to the head of a list.
 *
 * Return: Length (INT) of a list.
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
