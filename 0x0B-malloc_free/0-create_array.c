#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));

	if (size == 0)
		return (NULL);

	if (s == NULL)
	{
		_putchar('N');
		_putchar('o');
		_putchar('t');
		_putchar(' ');
		_putchar('e');
		_putchar('n');
		_putchar('o');
		_putchar('u');
		_putchar('g');
		_putchar('h');
		_putchar(' ');
		_putchar('m');
		_putchar('e');
		_putchar('m');
		_putchar('o');
		_putchar('r');
		_putchar('y');
		_putchar('\n');
	}
	
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	
	return (s);

	free(s);
}
