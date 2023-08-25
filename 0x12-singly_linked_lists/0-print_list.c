#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints The Elements of a Linked List
 * @h: Pointer to list_t List to Print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		z++;
	}

	return (z);
}
