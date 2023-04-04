#include "lists.h"

/**
 * get_nodeint_at_index - returns position of node in linked listint_t list
 * @head: pointer to head of linked listint_t list
 * @index: location of node
 * Return: location of node ELSE NULl
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
