/**
 * memset - fills memory with a constant byte
 * @s: A pointer to the starting address of the memory block to be filled
 * @b: The value to be set
 * @n: The number of bytes to be set to the specified value
 *
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
