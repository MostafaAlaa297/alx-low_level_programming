#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a node to the beginning of node list_t
 * @head: A pointer to the first element of the list
 * @str: A list of characters
 *
 * Return: The address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
