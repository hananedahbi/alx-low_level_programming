#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t i = 0;

    while (h)
    {
        h = h->next;
        i++;
    }

    return i;
}
