#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
