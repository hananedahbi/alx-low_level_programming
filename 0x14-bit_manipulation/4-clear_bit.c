#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Set bit
 * @n: Pointer to number
 * @index: Index position
 * Return: 1 if worked,
 *         -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int count;

	if (index > 64)
		return (-1);
	count = index;
	for (i = 1; count > 0; i *= 2, count--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
