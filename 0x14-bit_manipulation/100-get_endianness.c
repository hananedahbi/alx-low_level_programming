#include "main.h"

/**
 * get_endianness - Check endianness
 * Return: 0 if big endian,
 *         or 1 if little endian
 */
int get_endianness(void)
{
	int number;

	number = 1;
	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
