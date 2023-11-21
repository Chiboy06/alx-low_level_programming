#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs = NULL;  /* Initialize prev to NULL. */
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->next;  /* Save the next node. */
		current->next = prevs;  /* Reverse the pointer direction. */
		prevs = current;
		current = next;
	}

	*head = prevs;  /* Update the head pointer to the new head. */
	return (*head);
}
