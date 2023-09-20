#include "main.h"
#include <stdio.h>

/**
 * strcat - concatenates two strings
 * @dest: the string to concatenate to
 * @src: the string to concatenate
 *
 * Return: A pointer pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while(*src)
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';
		
	return start;
}
