#include "lists.h"

/**
 * print_listint_safe - prints a linked listint_t list
 * @head: pointer to head of linked list
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *x, *y;
	size_t count = 0;

	x = y = head;

	while (x != NULL && y->next != NULL && y != NULL)
	{
		count++;
		x = x->next;
		y = y->next->next;

		if (x == y)
		{
			count++;
			head = head->next;

			while (head != x)
			{
				head = head->next;
				count++;
			}
			exit(98);
		}
	}
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}





