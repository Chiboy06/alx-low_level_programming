#include "lists.h"
#include <stdio.h>


/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (current >= current->next)
		{
			/* Check for a loop condition. */
			loop_node = current->next;
			break;
		}

		current = current->next;
	}

	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98); /* Exit with status 98 if a loop is detected. */
	}

	return (node_count);
}


