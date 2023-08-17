#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes  node at index of a dlistint_t list
 * @head: pointer to head of list
 * @index: position of node to be deleted
 * Return: 1 else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *current = *head;
	unsigned int y;

	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (y = 0; y < (index - 1); y++)
	{
		if (current->next ==  NULL)
			return (-1);
		current = current->next;
	}
	h = current->next;
	current->next = h->next;
	free(h);

	return (1);
}
