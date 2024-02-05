#include "lists.h"
/**
 * sum_listint - Computes the sum of all the data in a list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{

	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
