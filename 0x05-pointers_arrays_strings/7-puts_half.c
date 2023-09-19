#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string to print its half
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) - 1) / 2; i < _strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');
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

	while (s[i] != '\0')
		i++;

	return (i);
}
