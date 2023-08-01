#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t i = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        i++;
    }

    return (i);
}
