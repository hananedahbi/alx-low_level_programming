#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to a pointer to the head node of the linked list.
 */
void free_listint2(listint_t **head)
{
    listint_t *current;

    while (*head)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
    }
}
