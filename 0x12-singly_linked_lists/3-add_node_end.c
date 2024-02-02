#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * new _node_end - Adds a new node at the end of a list_t linked list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: Address of the new element,
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
