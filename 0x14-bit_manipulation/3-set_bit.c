#include "main.h"

/**
 * set_bit - Sets a Bit to a given Index to 1
 * @index: The bit Index set to 1
 * @n: Pointer to Number to Change
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
