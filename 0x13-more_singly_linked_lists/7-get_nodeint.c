#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node in a listint_t
 * @head: A pointer to the first element in the list
 * @index: The index of the node
 *
 * Return: The node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
