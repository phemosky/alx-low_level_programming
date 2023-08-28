#include "lists.h"

/**
 * print_listint - Prints all the Elements of a Linked List
 * @h: Linked List of Type Listint_t to Print
 *
 *
 * Return: Number of Nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t dig = 0;

	while (h)
	{
		printf("%d\n", h->n);
		dig++;
		h = h->next;
	}

	return (dig);
}
