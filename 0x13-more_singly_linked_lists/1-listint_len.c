#include "lists.h"
/**
 * listint_len - Returns number of elements in a list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t total_count = 0;

	while (h != NULL)
	{
		total_count++;
		h = h->next;
	}

	return (total_count);
}
