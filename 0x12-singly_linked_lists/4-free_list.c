#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a t_list
 * @head: A pointer to the first element of the the t_list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
