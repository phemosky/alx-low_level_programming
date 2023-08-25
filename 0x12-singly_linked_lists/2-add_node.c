#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds New Node at Begining of a Linked List
 * @str: New String Added in the Node
 * @head: Double Pointer to the list of list_t
 * Return: Address of New Element, or NULL if it Fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *New;
	unsigned int length = 0;

	while (str[length])
		length++;

	New = malloc(sizeof(list_t));
	if (!New)
		return (NULL);

	New->str = strdup(str);
	New->len = length;
	New->next = (*head);
	(*head) = New;

	return (*head);
}
