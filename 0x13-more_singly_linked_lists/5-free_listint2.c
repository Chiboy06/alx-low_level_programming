#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
    listint_t *current;  /* Declare a pointer to traverse the list. */

    while (*head != NULL)
    {
        current = *head;    /* Save the current node. */
        *head = (*head)->next;  /* Move head to the next node. */
        free(current);      /* Free the current node. */
    }
}

