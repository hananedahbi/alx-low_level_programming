#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;

    while (head)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        head = head->next;
    }

    return count;
}
