#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to retrieve, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;  /* Initialize a count variable to keep track of the position. */

    while (head != NULL)
    {
        if (count == index)
        {
            return (head);  /* Return the current node when the index matches the count. */
        }

        head = head->next;  /* Move to the next node. */
        count++;           /* Increment the count. */
    }

    return (NULL);  /* Return NULL if the node at the given index does not exist. */
}

