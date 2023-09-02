#include "main.h"

/**
 * get_bit - Returns Value of a bit at index in a Decimal nNumber
 * @index: Index of the bit
 * @n: Number to Search
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
