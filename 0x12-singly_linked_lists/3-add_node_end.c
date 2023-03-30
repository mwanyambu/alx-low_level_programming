#include "lists.h"
#include <string.h>

/**
 * add_node_end - appends new node to end of list_t
 * @head: pointer to head of list_t
 * @str: str to be appended
 * Return: address of new element else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *strs;
	int len;
	list_t *list_x, *last_node;

	list_x = malloc(sizeof(list_t));
	if (list_x == NULL)
	{
		return (NULL);
	}
	strs = strdup(str);

	if (str == NULL)
	{
		free(list_x);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	list_x->str = strs;
	list_x->len = len;
	list_x->next = NULL;

	if (*head == NULL)
		*head = list_x;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = list_x;
	}
	return (*head);
}
