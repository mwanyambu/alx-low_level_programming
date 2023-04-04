#include "lists.h"

/**
 * free_listint - frees limked listint_t list
 * @head: pointer to head of linked listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (h != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}

