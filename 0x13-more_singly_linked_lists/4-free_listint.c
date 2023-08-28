#include "lists.h"

/**
 * free_listint - Frees a Linked List
 * @head: listint_t List to be Freed
 */

void free_listint(listint_t *head)
{
	listint_t *Tepp;

	while (head)
	{
		Tepp = head->next;
		free(head);
		head = Tepp;
	}
}
