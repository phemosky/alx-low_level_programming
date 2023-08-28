#include "lists.h"

/**
 * add_nodeint_end - At the end of a linked list a Node is added
 * @n: Data to insert in the new Element
 * @head: Pointer to the First Element in List
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tempp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tempp->next)
		tempp = tempp->next;

	tempp->next = nw;

	return (nw);
}
