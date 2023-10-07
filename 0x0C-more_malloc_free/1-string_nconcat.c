#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenate two strings and return a pointer to
 * the n bytes of the second string
 * @s1: The first string to concatenate with
 * @s2: The second string to concatenate
 * @n: The number of bytes to concatenate from s2
 *
 * Return: A pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	ptr = malloc((len1 + n) * sizeof(char));

	if (ptr == NULL)
		return NULL;
	if(s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
			ptr[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			ptr[i + j] = s2[j];
	/*}*/

	ptr[i + j] = '\0';

	return ptr;
}
