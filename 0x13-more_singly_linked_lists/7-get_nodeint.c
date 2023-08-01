#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at index
 * @head: Pointer to first node
 * @index: Index of node to get
 *
 * Return: Pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *node;
    unsigned int n;

    for (node = head, n = 0; node && n < index; node = node->next, n++);
    return (node);
}
