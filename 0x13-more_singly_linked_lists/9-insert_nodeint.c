#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i = 0;

    /* Create a new node and check if memory allocation was successful. */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node with the provided data. */
    new_node->n = n;

    if (idx == 0)
    {
        /* Insert at the beginning of the list. */
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;

    while (current != NULL)
    {
        if (i == idx - 1)
        {
            /* Insert the new node at the specified position. */
            new_node->next = current->next;
            current->next = new_node;
            return (new_node);
        }
        current = current->next;
        i++;
    }

    /* If idx is out of range, free the new node and return NULL. */
    free(new_node);
    return (NULL);
}

