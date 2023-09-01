#include "main.h"

/**
 * binary_to_uint - Converts Binary Number to unsigned Integer
 * @b: String containing the binary number
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[a] - '0');
	}

	return (dec_value);
}
