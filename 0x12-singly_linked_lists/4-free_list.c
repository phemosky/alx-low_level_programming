#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a Linked List
 * @head: Llst of list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *TEMP;

	while (head)
	{
		TEMP = head->next;
		free(head->str);
		free(head);
		head = TEMP;
	}
}
