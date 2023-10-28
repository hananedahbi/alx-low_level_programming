#include "main.h"
#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int camp;

	if (index > 64)
		return (-1);

	camp = n >> index;

	return (camp & 1);
}
