#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *NEXT = NULL;
	while (*head)
	{
		NEXT = (*head)->NEXT;
		(*head)->NEXT = prev;
		prev = *head;
		*head = NEXT;
	}
	*head = prev;
	return (*head);
}
