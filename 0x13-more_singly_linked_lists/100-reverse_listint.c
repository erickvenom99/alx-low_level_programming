#include "lists.h"
/**
 * reverse_listint - Print a list in revers
 *@head: Head pointer
 *
 *Returns: Ponter to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return *head;
}
