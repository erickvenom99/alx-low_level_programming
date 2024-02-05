#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node at a given position
 * @head: Double pointer to the head  list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data
 *
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *newnode;

	if (*head == NULL && idx > 0)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		while (temp != NULL && count < idx - 1)
		{
			temp = temp->next;
			count++;
		}
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
