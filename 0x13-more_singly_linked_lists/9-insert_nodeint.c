#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new Node in a linked list
 * @idx: Index to where new Node is added
 * @head: Pointer to first Node in the list
 * @n: Data to insert in new Node
 * Return: Pointer to New node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nw;
	listint_t *tepp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (a = 0; tepp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			nw->next = tepp->next;
			tepp->next = nw;
			return (nw);
		}
		else
			tepp = tepp->next;
	}

	return (NULL);
}
