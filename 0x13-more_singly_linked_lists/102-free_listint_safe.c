#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int df;
	listint_t *T;
	if (!h || !*h)
		return (0);
	while (*h)
	{
		df = *h - (*h)->next;
		if (df > 0)
		{
			T = (*h)->next;
			free(*h);
			*h = T;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
