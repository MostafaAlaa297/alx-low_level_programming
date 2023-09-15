
/**
 * isupper - checks for upper case chars
 * @c: the character to check
 *
 * Return: 0 if uppercase and 1 if not
 */

int _isupper(int c)
{
	/* Conditional to check for uppercase */
	if (c >= 'A' && c <= 'Z')
		return (1); /* Return 1 if the char is uppercase */
	else
		return (0); /* Return 0 otherwise */
}
