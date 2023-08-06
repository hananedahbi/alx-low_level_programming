#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: Decimal number to be converted and printed as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int count;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (num = n, count = 0; (num >>= 1) > 0; count++)
		;

	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			printf("1");
		else
			printf("0");
	}
}
