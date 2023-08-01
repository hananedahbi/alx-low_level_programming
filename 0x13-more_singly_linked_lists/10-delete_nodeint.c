#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: Pointer to a pointer to the first node.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (!head || !(*head))
        return (-1);

    if (index == 0)
    {
        listint_t *temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    listint_t *current = *head;
    unsigned int i = 0;

    while (current && i < index - 1)
    {
        current = current->next;
        i++;
    }

    if (!current || !(current->next))
        return (-1);

    listint_t *temp = current->next;
    current->next = current->next->next;
    free(temp);

    return (1);
}
