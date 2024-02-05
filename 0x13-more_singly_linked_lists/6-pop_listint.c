#include "lists.h"
/**
 *pop_listint - Removes the head node of a listint_t list .
 *@head: Double pointer to the head of the linked list.
 *
 *Return: data or 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
