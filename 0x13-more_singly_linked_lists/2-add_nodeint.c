#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of the list
 * @h: A pointer to the first node of the list
 * @n: Number of elements in the list
 *
 * Return: The address of the new element, or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
