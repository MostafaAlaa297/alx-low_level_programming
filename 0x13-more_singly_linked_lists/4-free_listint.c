#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * @head: A pointer to the first element of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
