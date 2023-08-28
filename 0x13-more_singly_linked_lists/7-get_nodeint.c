#include "lists.h"

/**
 * get_nodeint_at_index - Returns Node at a certain index in a Linked List
 * @head: First Node of Linked List
 * @index: Index of the Node to return
 * Return: Pointer to Node to look for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tepp = head;

	while (tepp && a < index)
	{
		tepp = tepp->next;
		a++;
	}

	return (tepp ? tepp : NULL);
}
