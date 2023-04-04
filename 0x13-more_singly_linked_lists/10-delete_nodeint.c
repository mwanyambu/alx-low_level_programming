#include "lists.h"

/**
 * delete_ndeint_at_index - delete a node in a specified index
 * @head: pointer to head of linked listint_t list
 * @index: indext of node to remove
 * Return: 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *current = *head;
	unsigned int x;

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
	for (x = 0; x < (index - 1); x++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	h = current->next;
	current->next = h->next;
	free(h);
	return (1);
}
