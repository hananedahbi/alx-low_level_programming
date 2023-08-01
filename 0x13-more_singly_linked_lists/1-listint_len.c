 #include "lists.h"

/**
 * get_list_length - Counts the number of elements in a linked listint_t list.
 * @h: Pointer to the list's first node.
 *
 * Return: The number of nodes in the list.
 **/
size_t listint_len(const listint_t *h)
{
    const listint_t *node = h;
    size_t cont = 0;

    while (node)
    {
        cont++;
        node = node->next;
    }

    return (cont);
}
