#include "main.h"

int get_endianness(void)
{
	
  int n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
