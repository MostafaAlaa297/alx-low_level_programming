/**
 * strncat - Concatenates two strings
 * but with specified number of bytes of the second string
 * @dest: The string to concatenate to
 * @src: The string to concatenate
 * @n: The number of bytes to use from the second string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;

		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (start);
}
