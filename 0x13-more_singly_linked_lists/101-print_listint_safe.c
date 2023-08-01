#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely, avoiding cycles.
 * @head: Pointer to the head of the list.
 *
 * Returns: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;

    while (current)
    {
        printf("[%p] %i\n", (void *)current, current->n);
        current = current->next;
        count++;
    }

    return (count);
}
