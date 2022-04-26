#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node at beginning
 * @head: pointer
 * @n: data
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
