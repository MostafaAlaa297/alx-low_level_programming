#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: A pointer to the first element of the list
 *
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);

	current = *head;
	*head = (*head)->next;
	data = current->n;
	free(current);

	return (data);
}
