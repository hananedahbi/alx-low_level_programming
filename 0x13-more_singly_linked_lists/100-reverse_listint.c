#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *temp_node = *head, *next;

    if (!head || !*head)
        return NULL;

    while (temp_node)
    {
        next = temp_node->next;
        temp_node->next = prev;
        prev = temp_node;
        temp_node = next;
    }

    *head = prev;
    return *head;
}
