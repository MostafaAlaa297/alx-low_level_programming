#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a listint_t linked list
 * @head: A pointer to the first element in the list
 *
 * Return: Sum of all of the data (n), or 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
