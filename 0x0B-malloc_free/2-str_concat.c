#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: The first string to concatenate with
 * @s2: The string to concatenate
 *
 * Return: A pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, total_len;
	char *temp;
	int i, j;

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

	total_len = len1 + len2;

	temp = malloc((total_len + 1) * sizeof(char));

	if (temp == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		temp[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		temp[i + j] = s2[j];
	}

	temp[i + j] = '\0';

	return (temp);
}
