#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a Node in a Linked List of a certain index
 * @index: Index of Node to deleted
 * @head: Pointer to First Element of the list
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tepp = *head;
	listint_t *rescent = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tepp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tepp || !(tepp->next))
			return (-1);
		tepp = tepp->next;
		a++;
	}


	rescent = tepp->next;
	tepp->next = rescent->next;
	free(rescent);

	return (1);
}
