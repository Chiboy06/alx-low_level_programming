#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
	{
		listint_t *N;
		listint_t *T = *head;
		N = malloc(sizeof(listint_t));
		if (!N)
		return (NULL);
		N->n = n;
		N->next = NULL;
		if (*head == NULL)
		{
			*head = N;
			return (N);
		}
		while (T->next)
		T = T->next;
		T->next = N;
		return (N);
}
