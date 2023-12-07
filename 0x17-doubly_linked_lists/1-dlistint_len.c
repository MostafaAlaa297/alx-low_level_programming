#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - Calculates the number of elements in a linked list
 * @h: A pointer to the first element
 *
 * Return: The number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int len = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
