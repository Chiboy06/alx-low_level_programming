#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	while (h)
	{
		counts += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counts);
}

