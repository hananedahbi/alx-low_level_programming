#include <stdio.h>
#include "main.h"

/**
 * set_bit - Set bit
 * @n: Decimal number
 * @index: Position index
 * Return: 1 if successful, -1 if error
 */
 {
	unsigned long int maks;

	if (index > 64)
		return (-1);

	for (maks = 1; index > 0; index--, maks *= 2)
		;
	*n += maks;

	return (1);
}
