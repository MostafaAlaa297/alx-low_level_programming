#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: A pointer to a pointer to the first node of the list
 * @n: The int to add
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
