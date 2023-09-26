#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);  /* Return -1 if the list is empty. */

    if (index == 0)
    {
        /* Delete the first node. */
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    current = *head;

    while (current != NULL)
    {
        if (i == index - 1)
        {
            /* Delete the node at the specified position. */
            temp = current->next;
            if (temp == NULL)
                return (-1); /* Return -1 if index is out of range. */
            current->next = temp->next;
            free(temp);
            return (1);
        }
        current = current->next;
        i++;
    }

    return (-1); /* Return -1 if index is out of range. */
}

