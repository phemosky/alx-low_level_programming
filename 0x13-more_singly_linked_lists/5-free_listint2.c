#include "lists.h"

/**
 * free_listint2 - Frees a Linked List
 * @head: Pointer to the listint_t List to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *Tepp;

	if (head == NULL)
		return;

	while (*head)
	{
		Tepp = (*head)->next;
		free(*head);
		*head = Tepp;
	}

	*head = NULL;
}
