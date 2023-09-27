#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *aux_node = *head;
    listint_t *node_to_delete = *head;
    unsigned int idx;
    unsigned int cont = 0;

    /* Check for an empty list */
    if (!(*head))
        return (-1);

    /* Check for deleting at the beginning */
    if (index == 0)
    {
        *head = node_to_delete->next;
        free(node_to_delete);
        return (1);
    }

    /* Search for the position to delete */
    idx = index - 1;
    while (aux_node && cont != idx)
    {
        cont++;
        aux_node = aux_node->next;
    }

    /* General case */
    if (cont == idx && aux_node)
    {
        node_to_delete = aux_node->next;
        aux_node->next = node_to_delete->next;
        free(node_to_delete);
        return (1);
    }

    return (-1);
}
