#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node from 0
 * Return: index else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head ==  NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
