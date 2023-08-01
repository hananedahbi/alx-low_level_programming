#include "lists.h"

/**
 * free_listint - Frees a list of inst
 * @head: Pointer to frist node
 */
void free_listint(listint_t *head)
{
    listint_t *node;

    while (head)
    {
        node = head;
        head = head->next;
        free(node);
    }
}
