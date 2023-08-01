#include "lists.h"

/**
 * custom_listint_len - Returns the number of elements in a linked list.
 * @head: Pointer to the list's first node.
 *
 * Return: The number of nodes in the list.
 **/
size_t custom_listint_len(const listint_t *head)
{
    const listint_t *current = head;
    size_t element_count = 0;

    while (current)
    {
        element_count++;
        current = current->next;
    }

    return (element_count);
}
