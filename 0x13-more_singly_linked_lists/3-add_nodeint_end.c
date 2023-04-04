#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of linked listint_t
 * @head: pointer to pointer to head of listint_t
 * @n: integer
 * Return: address of new element else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail_node = *head;
		while (tail_node->next != NULL)
		{
			tail_node = tail_node->next;
		}
		tail_node->next = new_node;
	}
	return (*head);
}



