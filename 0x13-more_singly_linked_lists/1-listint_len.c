#include "lists.h"

/**
 * listint_len - Returns Number of Elements in Linked Lists
 * @h: Linked List of Type listint_t to Traverse
 *
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t dig = 0;

	while (h)
	{
		dig++;
		h = h->next;
	}

	return (dig);
}
