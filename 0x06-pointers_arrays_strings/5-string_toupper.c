/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @str: A pointer that points at the first char of a string
 *
 * Return: A string of uppercase letters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
