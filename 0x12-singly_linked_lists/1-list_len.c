#include "lists.h"

/**
 * listint_len - returns the length of a list;
 * @h: pointer to the head of a list.
 *
 * Return: Length (INT) of a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

