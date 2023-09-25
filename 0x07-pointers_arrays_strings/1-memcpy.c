#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: A pointer to the destination array where the content is to be copied
 * @src: A pointer to the source of data to be copied
 * @n: The number of bytes to be copied
 *
 * Return: A pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* int src_len = _strlen(src); */

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
