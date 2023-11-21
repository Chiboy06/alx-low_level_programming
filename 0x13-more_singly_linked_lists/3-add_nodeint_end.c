#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;  /* Declare a pointer to the new node.*/
	listint_t *current;   /* Declare a pointer to traverse the list.*/

	/* Allocate memory for the new node.*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if malloc fails.*/
	}

	/* Initialize the new node's data and next pointer. */
	new_node->n = n;
	/* The new node wil be the last noe, so its next is NULL.  */
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head.*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the current last node. */
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		/* Append the new node to the end of the list. */
		current->next = new_node;
	}

	return (new_node);  /* Return the address of the new element. */
}

