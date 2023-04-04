#include "lists.h"

/**
 * free_listint2 - frees linked listint_t list
 * @head: pointer to head of linked list listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	head = NULL;
}
