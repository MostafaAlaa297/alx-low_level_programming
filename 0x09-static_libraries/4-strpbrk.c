#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in the string s of any of
 * the bytes in the string accept.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *s1, *s2;

	for (s1 = s; *s1 != '\0'; s1++)
	{
		for (s2 = accept; *s2 != '\0'; s2++)
		{
			if (*s1 == *s2)
				return (s1);
		}
	}

	return (NULL);
}
