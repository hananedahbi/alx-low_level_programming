#include "lists.h"

/**
 * count_listint_elements - Returns the number of elements in a linked list.
 * @head: Pointer to the list's first node.
 *
 * Return: The number of nodes in the list.
 **/
size_t count_listint_elements(const listint_t *head)
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
