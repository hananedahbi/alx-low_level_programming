#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * @head: address of pointer to first node
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *node, *prev_node;
    unsigned int i = 0;

    if (!head || !(*head))
        return (-1);

    if (index == 0)
    {
        node = *head;
        *head = (*head)->next;
        free(node);
        return (1);
    }

    node = *head;
    while (node)
    {
        if (i == index)
        {
            prev_node->next = node->next;
            free(node);
            return (1);
        }
        i++;
        prev_node = node;
        node = node->next;
    }

    return (-1);
}     
