#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to return its length
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int counter;

	counter	= 0;

	if (*s == '\0')
		return (counter);

	counter++;
	return (counter + _strlen_recursion(++s));
}
