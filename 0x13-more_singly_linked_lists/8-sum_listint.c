#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;  /* Initialize sum to 0. */

	while (head != NULL)
	{
		/* Add the data (n) of the current node to the sum. */
		sum += head->n;
		head = head->next;  /* Move to the next node. */
	}

	return (sum);  /* Return the sum. */
}

