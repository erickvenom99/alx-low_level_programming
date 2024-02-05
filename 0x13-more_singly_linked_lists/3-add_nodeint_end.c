#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 * @head: Pointer to the head of the linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}

	return (newnode);
}
