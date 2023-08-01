#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The sum of all the data 
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
