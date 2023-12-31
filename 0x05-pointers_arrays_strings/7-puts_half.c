#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string to print its half
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 2 != 0)
		len--;

	for (i = len / 2; i < len; i++)
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
