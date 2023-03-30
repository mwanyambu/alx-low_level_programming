#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beggining of list_t
 * @head: pointer to head of list_t
 * @str: string to be appended
 * Return: address of new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strs;
	int len;
	list_t *list_x;

	list_x = malloc(sizeof(list_t));
	if (list_x == NULL)
	{
		return (NULL);
	}
	strs = strdup(str);

	if (strs == NULL)
	{
		free(list_x);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	list_x->str = strs;
	list_x->len = len;
	list_x->next = *head;

	*head = list_x;

	return (list_x);
}
