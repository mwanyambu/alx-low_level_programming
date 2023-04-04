#include "lists.h"

/**
 * sum_listint - returns sum of all data in linked listint_t list
 * @head: pointer to head of linked listint_tlist
 * Return: sum ELSE NULL if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
