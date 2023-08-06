#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert binary
 * @b: Binary string
 * Return: Decimal number,
 *         or 0 if invalid char
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result, count;
	int index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	for (count = 1, result = 0, index--; index >= 0; index--, count *= 2)
	{
		if (b[index] == '1')
			result += count;
	}

	return (result);
}
