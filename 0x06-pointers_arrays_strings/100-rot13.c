#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - Replaces each letter in a string with the 13th letter
 * after it in the latin alphabet
 * @str: The string to encode using rot13
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	char *start = str;
	
	char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	int i, j;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (str[i] == rot13[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}
	
	return (start);
}
