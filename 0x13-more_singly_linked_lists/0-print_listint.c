#include "lists.h"
/**
 * print_listint - Prints all in a list
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t total_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		total_count++;
		h = h->next;
	}

	return (total_count);
}
