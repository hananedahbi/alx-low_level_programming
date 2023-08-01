 #include "lists.h"

/**
 * count_elements - Counts the number of elements in a linked listint_t list.
 * @h: Pointer to the list's first node.
 *
 * Return: The number of nodes in the list.
 **/
size_t count_elements(const listint_t *h)
{
    const listint_t *node = h;
    size_t count = 0;

    while (node)
    {
        count++;
        node = node->next;
    }

    return (count);
}   
