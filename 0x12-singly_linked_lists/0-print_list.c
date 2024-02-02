#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t total_nodes = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp -> len, temp->str);
		}
		total_nodes++;
		temp = temp->next;
	}

	return (total_nodes);
}
