/**
 * isupper - checks for upper case chars
 *
 * Return: 0 if uppercase and 1 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
