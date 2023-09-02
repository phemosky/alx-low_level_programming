#include "main.h"

/**
 * get_endianness - Checks if Machine is little or big Endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *) &a;

	return (*ch);
}
