#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint - Inserts a new node at a given position
 * @head: A pointer to the first element in the listint_t
 * @idx: The index where the new node should be inserted
 * @n: The data (n) to add
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	
	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	temp = *head;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new);

		return (NULL);
	}
	
	new->next = temp->next;
	temp->next = new;

	return (new);
}
