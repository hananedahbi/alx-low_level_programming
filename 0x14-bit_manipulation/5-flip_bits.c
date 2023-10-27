#include "main.h"
#include <stdio.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int c;

	diff = n ^ m;
	c = 0;

	while (diff)
	{
		c++;
		diff &= (diff - 1);
	}

	return (c);
}
