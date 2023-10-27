#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int j;

	if (b == NULL)
		return (0);

	for (j = 0; b[len]; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	for (power = 1, total = 0, j--; j >= 0; j--, power *= 2)
	{
		if (b[j] == '1')
			total += power;
	}

	return (total);
}
