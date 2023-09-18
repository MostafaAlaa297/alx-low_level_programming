#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = _strlen(s) - 1; i <= j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

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
