#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of dlistint_t list
 * @head: pointer to head
 * @n: number
 * Return: address of new element else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *dlistint_x;

	dlistint_x = malloc(sizeof(dlistint_t));
	if (dlistint_x == NULL)
	{
		return (NULL);
	}
	dlistint_x->n = n;
	dlistint_x->next = *head;
	dlistint_x->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = dlistint_x;
	}

	*head = dlistint_x;
	return (dlistint_x);
}
