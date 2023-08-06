#include "main.h"

/**
 * set_bit - Set bit
 * @n: Decimal number
 * @index: Position index
 * Return: 1 if successful, -1 if error
 */
 {
	unsigned long int count;

	if (index > 64)
		return (-1);

	for (count = 1; index > 0; index--, count *= 2)
		;
	*n += count;

	return (1);
}
