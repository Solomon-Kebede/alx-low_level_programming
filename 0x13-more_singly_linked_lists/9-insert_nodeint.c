#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at nth index
 * @head: pointer
 * @idx: nth index
 * @n: value
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (temp != NULL || head != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
