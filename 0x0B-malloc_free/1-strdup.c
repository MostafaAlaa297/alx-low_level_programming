#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string to be copied
 *
 * Return: A pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *s;

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	while (str[size] != '\0')
		size++;

	s = malloc((size + 1) * sizeof(char));

	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
