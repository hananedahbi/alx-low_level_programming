#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 **/
size_t print_listint(const listint_t *h)
{
    const listint_t *node = h;
    size_t element_count = 0;

    while (node)
    {
        printf("%i\n", node->n);
        element_count++;
        node = node->next;
    }

    return (element_count);
}
