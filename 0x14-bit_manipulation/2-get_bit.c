#include "main.h"
#include <stdio.h>
/**
 * get_bit - Retrieve bit
 * @n: Number for evaluation
 * @index: Starting position
 * Return: Bit value at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = n >> index;

	return (mask & 1);
}
