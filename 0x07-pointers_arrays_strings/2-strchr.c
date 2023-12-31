#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to search the string for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
