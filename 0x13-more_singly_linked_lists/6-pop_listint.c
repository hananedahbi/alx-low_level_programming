#include "lists.h"

/**
 * pop_listint - Pop head node of a listint_t linked list.
 * @head: Address of pointer to the first node.
 *
 * Return: Value of popped node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *node;
    int n;

    if (head && *head)
    {
        node = (*head)->next;
        n = (*head)->n;
        free(*head);
        *head = node;
        return (n);
    }

    return (0);
}
