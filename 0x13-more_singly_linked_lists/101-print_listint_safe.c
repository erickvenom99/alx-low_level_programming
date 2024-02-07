#include "lists.h"
/**
 * size_t print_listint_safe - Prints a linstint_t list
 *@head: Head pointer
 *
 *Return: Number of node or exist 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	size_t count = 0;

	while (curr != NULL) {
		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;

		if (curr >= curr->next)
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}

		curr = curr->next;
	}

	return count;
}
