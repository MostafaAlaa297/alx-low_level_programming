#include <ctype.h>

/**
 * is_sep - Checks for seperators
 * @c: The character to check for
 *
 * Return: The string with each word capitalized
 */
int is_sep(char c)
{
	int i;
	char seperators[] = " \t\n,;.!?\"(){}";

	for (i = 0; seperators[i] != '\0'; i++)
	{
		if (c == seperators[i])
		return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: the string to capitalize its words
 *
 * Return: The string with each word capitalized
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] != ' ')
			str[i] = toupper(str[i]);
		if (is_sep(str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = toupper(str[i + 1]);
		}
	}

	return (str);
}
