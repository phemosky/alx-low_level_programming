#include "lists.h"

/**
 * find_listint_loop - Find the Loop in Linked List
 * @head: Linked List to search for
 * Return: Address of Node where Loop Starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slo = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (slo && quick && quick->next)
	{
		quick = quick->next->next;
		slo = slo->next;
		if (quick == slo)
		{
			slo = head;
			while (slo != quick)
			{
				slo = slo->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
