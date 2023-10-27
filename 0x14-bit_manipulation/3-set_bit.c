#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;

	if (index > 64)
		return (-1);

	for (r = 1; index > 0; index--, r *= 2)
		;
	*n += r;

	return (1);
}
