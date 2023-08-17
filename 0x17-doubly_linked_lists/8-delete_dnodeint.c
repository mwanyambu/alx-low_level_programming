#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes  node at index of a dlistint_t list
 * @head: pointer to head of list
 * @index: position of node to be deleted
 * Return: 1 else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *h;
	unsigned int y;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	h = NULL;
	for (y = 0; y < index; y++)
	{
		if (current ==  NULL)
			return (-1);
		h = current;
		current = current->next;
	}
	if (current ==  NULL)
		return (-1);
	if (h ==  NULL)
		*head = current->next;
	else
		h->next = current->next;
	if (current->next != NULL)
		current->next->prev = h;
	free(current);

	return (1);
}
