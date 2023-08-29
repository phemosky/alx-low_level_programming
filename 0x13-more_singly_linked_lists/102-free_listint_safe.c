#include "lists.h"

/**
 * free_listint_safe - Frees The Linked List
 * @h: Pointer to First Node in Linked List
 * Return: Numbers of Element in Freed List
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int differ;
	listint_t *tepp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		differ = *h - (*h)->next;
		if (differ > 0)
		{
			tepp = (*h)->next;
			free(*h);
			*h = tepp;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}

	*h = NULL;

	return (lent);
}
