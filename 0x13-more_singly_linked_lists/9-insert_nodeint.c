#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idex, int n)
{
	unsigned int m;
	listint_t *N;
	listint_t *T = *head;
	N = malloc(sizeof(listint_t));
	if (!N || !head)
		return (NULL);
	N->n = n;
	N->next = NULL;
	if (idex == 0)
	{
		N->next = *head;
		*head = N;
		return (N);
	}
	for (m = 0; T && m < idex; m++)
	{
		if (m == idex - 1)
		{
			N->next = T->next;
			T->next = N;
			return (N);
		}
		else
			T = T->next;
	}
	return (NULL);
}
