#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: pointer
 * @n: data
 * Return: pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (temp && temp->next)
		temp = temp->next;
	if (temp)
		temp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
