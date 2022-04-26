#include "lists.h"

/**
 * pop_listint - free list
 * @head: pointer
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	int retval;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = temp;
	return (retval);
}
