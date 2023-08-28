#include "lists.h"

/**
 * reverse_listint - Reverses a Linked List
 * @head: Pointer to First Node of the List
 * Return: Pointer to First Node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
