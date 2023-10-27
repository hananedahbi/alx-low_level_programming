#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int s;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, s = 0; (temp >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
