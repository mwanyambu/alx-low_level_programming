#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	const dlistint_t *old = h;

	while (old != NULL)
	{
		printf("%d\n", old->n);
		old = old->next;
		x++;
	}
	return (x);
}
