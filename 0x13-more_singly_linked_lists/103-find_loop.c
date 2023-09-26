#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;     /* Move tortoise by one step. */
		hare = hare->next->next;       /* Move hare by two steps. */

		/* If tortoise and hare meet, there is a loop. */
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			/* Return the address where the loop starts. */
			return (tortoise);
		}
	}

	return (NULL);
}
