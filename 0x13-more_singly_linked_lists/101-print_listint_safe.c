#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - Counts Number of unique nodes
 * in a looped listint_t Linked List.
 * @head: Pointer to Head of the listint_t to check.
 * Return: If List is not Looped - 0.
 * Otherwise - Number of unique Nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				nodes++;
				turtle = turtle->next;
				hare = hare->next;
			}

			turtle = turtle->next;
			while (turtle != hare)
			{
				nodes++;
				turtle = turtle->next;
			}

			return (nodes);
		}

		turtle = turtle->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints listint_t list Safely.
 * @head: Pointer to Head of the listint_t list.
 * Return: Number of Nodes in list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t Node, index = 0;

	Node = looped_listint_len(head);

	if (Node == 0)
	{
		for (; head != NULL; Node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < Node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (Node);
}
