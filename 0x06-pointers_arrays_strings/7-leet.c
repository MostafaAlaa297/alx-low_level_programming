/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: String with encoded letters
 */
char *leet(char *str)
{
	char leet[] = "aAeEoOtTlL";
	char leet_enc[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
			if (str[i] == leet[j])
			{
				str[i] = leet_enc[j];
				break;
			}
	}

	return str;
}
