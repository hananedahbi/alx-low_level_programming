#include "lists.h"

/**
 * custom_listint_len - Counts the number of nodes in a linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t custom_listint_len(const listint_t *head)
{
    size_t node_count = 0;

    while (head)
    {
        head = head->next;
        node_count++;
    }

    return (node_count);
}
