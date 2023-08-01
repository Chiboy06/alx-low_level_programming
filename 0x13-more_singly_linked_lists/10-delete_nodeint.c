#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *T = *head;
	listint_t *current = NULL;
	unsigned int m = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(T);
		return (1);
	}
	while (m < index - 1)
	{
		if (!T || !(T->next))
		return (-1);
		T = T->next;
		m++;
	}
	current = T->next;
	T->next = current->next;
	free(current);
	return (1);
}
