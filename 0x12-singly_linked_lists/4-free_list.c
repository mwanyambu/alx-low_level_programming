#include "lists.h"
#include <stdlib.h>

/**
 * free_list -free list_t
 * @head: pointer to head of list_t
 */
void free_list(list_t *head)
{
	list_t *list_x;

	while (head)
	{
		list_x = head->next;
		free(head->str);
		free(head);
		head = list_x;
	}
}
