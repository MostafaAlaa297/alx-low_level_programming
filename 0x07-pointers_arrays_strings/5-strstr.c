#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: The string to search into
 * @needle: The string to find
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

	while (*n && *haystack && *haystack == *n)
	{
		haystack++;
		n++;
	}

	if (!*n)
	return h;

	haystack = h + 1;
	}

	return NULL;
}
