#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at the given index.
 * @head: Pointer to a pointer to the first node.
 * @idx: Index of the new node.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *node, *new_node = malloc(sizeof(listint_t));
    unsigned int i = 0;

    if (!head || !new_node)
    {
        free(new_node);
        return (NULL);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    node = *head;
    while (node)
    {
        if (i == idx - 1)
        {
            new_node->next = node->next;
            node->next = new_node;
            return (new_node);
        }
        i++;
        node = node->next;
    }

    free(new_node);
    return (NULL);
}
