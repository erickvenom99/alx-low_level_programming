#include "lists.h"
/**
* reverse_listint - Print a list in revers
* @head: Head pointer
*
* Return: Ponter to first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (*head);
}
