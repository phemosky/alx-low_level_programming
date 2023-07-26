#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int u;
	int v;

	for (u = 0; u < n--; u++)
	{
		v = a[u];
		a[u] = a[n];
		a[n] = v;
	}
}
