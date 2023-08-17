#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head
 * @n: number
 * Return: address of new element else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dlistint_x, *last_node;

	dlistint_x = malloc(sizeof(dlistint_t));

	if (dlistint_x == NULL)
	{
		return (NULL);
	}
	dlistint_x->n = n;
	dlistint_x->prev = NULL;
	dlistint_x->next = NULL;

	if (*head == NULL)
	{
		*head = dlistint_x;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = dlistint_x;
		dlistint_x->prev = last_node;
	}
	return (*head);
}
