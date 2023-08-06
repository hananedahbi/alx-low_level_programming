#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number string to an unsigned int.
 * @b: Binary string
 * Return: Converted decimal number, or 0 if invalid char is found
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result, count;
	int maks;

	if (b == NULL)
		return (0);

	for (maks = 0; b[maks]; maks++)
	{
		if (b[maks] != '0' && b[maks] != '1')
			return (0);
	}

	for ( count = 1, result = 0, maks--; maks >= 0; maks--, count *= 2)
	{
		if (b[maks] == '1')
			result += count;
	}

	return (result);
}
