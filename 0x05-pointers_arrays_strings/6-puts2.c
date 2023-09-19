#include "main.h"

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character, followed by a new line
 * @str: the string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str) - 1; i++)
	{
		_putchar(str[i]);

		i++;
	}

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
