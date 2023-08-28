#include "lists.h"

/**
 * sum_listint - Summation of all the Data in a listint_t list
 * @head: First Node of linked list
 * Return: Resulting Sum
 */

int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *tepp = head;

	while (tepp)
	{
		summ += tepp->n;
		tepp = tepp->next;
	}

	return (summ);
}
