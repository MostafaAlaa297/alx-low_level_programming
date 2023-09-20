#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: the string to calculate its length
 *
 * Return: number of chars in a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	return (i);
}
