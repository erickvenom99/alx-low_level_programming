#include <stdio.h>
#include "lists.h"
/**
 * list_len - Calculates the length of a list_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return count;
}
