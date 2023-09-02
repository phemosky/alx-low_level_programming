#include "main.h"

/**
 * clear_bit - Sets Value of a Given Bit to 0
 * @index: The Index of Bit to Clear
 * @n: Pointer to Number to Change
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
