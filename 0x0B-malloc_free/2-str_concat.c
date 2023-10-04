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

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	total_len = len1 + len2;

	temp = malloc((total_len + 1) * sizeof(char));
	
	if (temp == NULL)
		return (NULL);

	i = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			temp[i] = s1[i];

			i++;
		}
	}
	else
		temp = "";

	j = 0;

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			temp[i] = s2[j];

			i++;
			j++;
		}
	}
	else
		temp = "";

	temp[i] = '\0';

	return (temp);
}
