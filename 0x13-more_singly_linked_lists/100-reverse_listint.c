#include "lists.h"

/**
 * reverse_listint - return reverse linked listint_t list
 * @head: pointer to head of linked listint_t list
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head_node = NULL, *tail_node;

	while (*head != NULL)
	{
		tail_node = (*head)->next;
		(*head)->next = head_node;
		head_node = *head;
		*head = tail_node;
	}
	*head = head_node;
	return (*head);
}
