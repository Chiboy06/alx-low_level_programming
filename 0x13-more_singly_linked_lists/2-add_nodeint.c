#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;  /* Declare a pointer to the new node. */

	/* Allocate memory for the new node. */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if malloc fails. */
	}

	/* Initialize the new node's data and next pointer. */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer to point to the new node. */
	*head = new_node;

	return (new_node);  /* Return the address of the new element. */
}

