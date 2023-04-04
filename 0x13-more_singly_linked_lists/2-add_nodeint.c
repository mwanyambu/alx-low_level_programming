#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a node at the beginning of a linked listint_t list
 * @head: a pointer to a pointer of head of linked listsint_t
 * @n: integer
 * Return: address of new element else return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
