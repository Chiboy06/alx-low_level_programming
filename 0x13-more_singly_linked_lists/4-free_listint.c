#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 */
void free_listint(listint_t *head)
{
    listint_t *current;  /* Declare a pointer to traverse the list. */

    while (head != NULL)
    {
        current = head;       /* Save the current node. */
        head = head->next;    /* Move head to the next node. */
        free(current);        /* Free the current node. */
    }
}

