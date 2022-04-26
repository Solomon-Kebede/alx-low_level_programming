#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of nodes
 * @h: pointer
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
