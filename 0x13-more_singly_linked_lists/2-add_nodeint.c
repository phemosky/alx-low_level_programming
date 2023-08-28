#include "lists.h"

/**
 * add_nodeint - Adds new Node at the beginning of a Linked List
 * @n: Data to Insert the new Node
 * @head: Pointer to First Node on the list
 *
 *
 * Return: Pointer to new Node, or NULL if it Fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
