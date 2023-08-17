#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to head of list
 * @idx: index where new node should be added
 * @n: number
 * Return: address of new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int j;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (j = 0; j < idx - 1; j++)
	{
		if (current ==  NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	if (current->next ==  NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node ==  NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
