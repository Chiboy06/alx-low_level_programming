#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;  /* Initialize data to 0. */
	listint_t *temp;	/* Declare a temporary pointer. */

	if (*head != NULL)
	{
		/* Save the data from the current head node. */
		data = (*head)->n;

		/* Save the current head node in a temporary pointer. */
		temp = *head;

		/* Move the head pointer to the next node. */
		*head = (*head)->next;

		/* Free the memory of the old head node. */
		free(temp);
	}

	/* Return the data of the deleted head node (or 0 if the list is empty). */
	return (data);
}


