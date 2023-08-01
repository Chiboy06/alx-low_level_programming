#include "lists.h"
/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *T;
	if (head == NULL)
		return;
	while (*head)
	{
		T = (*head)->next;
		free(*head);
		*head = T;
	}
	*head = NULL;
}
