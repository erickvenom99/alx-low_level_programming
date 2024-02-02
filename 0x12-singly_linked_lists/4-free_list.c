#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory allocated for each node in the
 *              list, including the duplicated strings.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	while (current != NULL)
	{
		list_t *temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
