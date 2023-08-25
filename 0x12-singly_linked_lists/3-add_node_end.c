#include <stdlib.h>
#include <string.h>
#include "lists.h"


#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - At the end of a Linked List a New Node is added
 * @str: String to Put the New Node
 * @head: Double Pointer to the list of list_t
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NEW;
	list_t *TEMP = *head;
	unsigned int LENGTH = 0;

	while (str[LENGTH])
		LENGTH++;

	NEW = malloc(sizeof(list_t));
	if (!NEW)
		return (NULL);

	NEW->str = strdup(str);
	NEW->len = LENGTH;
	NEW->next = NULL;

	if (*head == NULL)
	{
		*head = NEW;
		return (NEW);
	}

	while (TEMP->next)
		TEMP = TEMP->next;

	TEMP->next = NEW;

	return (NEW);
}
