#include "lists.h"

/**
 * print_listint - Prints a linked lists
 * @h: Pointer to first node
 *
 * Return: size of list
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

    return (0);
}
