#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits
 * @n: First number
 * @m: Second number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int count;

	difference = n ^ m;
	count = 0;

	while (difference)
	{
		count++;
		difference &= (difference - 1);
	}

	return (count);
}
