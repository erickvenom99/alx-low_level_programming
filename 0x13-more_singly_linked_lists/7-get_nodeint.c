#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at a given index
 * @head: Pointer to the head of the  list.
 * @index: The index of the node
 * Return:nter to the node at the given index, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
