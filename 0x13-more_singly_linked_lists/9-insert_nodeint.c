#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node in a specified indext
 * @head: pointer to head of linked listint_t list
 * @idx: index of installation
 * @n: integer value
 * Return: address of new node else null if empty\/
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr = *head;
	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = curr;
		*head = new_node;
		return (new_node);
	}
	for (x = 0; x < (idx - 1); x++)
	{
		if (curr == NULL || curr->next == NULL)
		{
			return (NULL);
		}
		curr = curr->next;
	}
	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
