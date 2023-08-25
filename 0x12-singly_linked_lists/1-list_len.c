#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns Numbers of Elements Linked in a List
 * @h: Pointer to List of list_t
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
