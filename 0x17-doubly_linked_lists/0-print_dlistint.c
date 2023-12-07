#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t linked list
 * @h: A pointer to the first node
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int counter = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}

	return (counter);

}
