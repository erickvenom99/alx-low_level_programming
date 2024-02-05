#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning
 * @head: Double pointer to the head of the linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: Pointer to the newly node, or NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return NULL;

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return newnode;
}
