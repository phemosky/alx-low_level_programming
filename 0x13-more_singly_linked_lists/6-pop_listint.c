#include "lists.h"

/**
 * pop_listint - Deletes the Head Node of a Linked List
 * @head: Pointer to the First Element in Linked List
 * Return: Data inside Elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *Tepp;
	int digits;

	if (!head || !*head)
		return (0);

	digits = (*head)->n;
	Tepp = (*head)->next;
	free(*head);
	*head = Tepp;

	return (digits);
}
