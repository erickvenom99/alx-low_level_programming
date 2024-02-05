#include "lists.h"
/**
 * print_listint - Prints all in a list
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t total_count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		total_count++;
	}

	return (total_count);
}
