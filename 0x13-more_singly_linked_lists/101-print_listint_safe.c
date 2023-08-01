#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 *
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *T_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t NEW_n;
	T_n = head;
	while (T_n)
	{
		printf("[%p] %d\n", (void *)T_n, T_n->n);
		counter++;
		T_n = T_n->next;
		l_n = head;
		NEW_n = 0;
		while (NEW_n < counter)
		{
			if (T_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)T_n, T_n->n);
				return (counter);
			}
			l_n = l_n->next;
			NEW_n++;
		}
		if (!head)
		exit(98);
		}
		return (counter);
}
