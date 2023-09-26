#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0;
    listint_t *current = *h;
    listint_t *temp = NULL;

    while (current != NULL)
    {
        node_count++;
        temp = current;
        current = current->next;
        free(temp);

        if (temp <= current)
        {
            /* Check for a loop condition. */
            *h = NULL;
            break;
        }
    }

    return (node_count);
}

