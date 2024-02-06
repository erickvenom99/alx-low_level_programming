#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index  list.
 * @head: Double pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 0 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}
	prev = temp->next;
	temp->next = prev->next;
	free(prev);
	return (1);
}
