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
		*head = temp->next;
		free(temp);
		return (0);
	}

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (0);
}
