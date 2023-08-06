#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number string to an unsigned int.
 * @b: Binary string
 * Return: Converted decimal number, or 0 if invalid char is found
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result, base;
    int length;

    if (b == NULL)
        return (0);

    for (length = 0; b[length]; length++)
    {
        if (b[length] != '0' && b[length] != '1')
            return (0);
    }
  
    for (base = 1, result = 0, length--; length >= 0; length--, base *= 2)
    {
        if (b[length] == '1')
            result += base;
    }

    return (result);
}
