#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of a dlistint_t list
 * @head: pointer to head of a list
 * Return: sum else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
