#include "lists.h"

/**
 * pop_listint - deletes the head of linked listint_t list
 * @head: pointer to head of linked listint_t list
 * Return: 0 if emptly ELSE head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *h;

	int del;

	if (*head == NULL)
	{
		return (0);
	}

	h = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(h);

	return (del);
}
