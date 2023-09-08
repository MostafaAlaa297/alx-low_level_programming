#include <stdio.h>
/**
 * main - End Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char[] alphabets = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (int i = 0; i < sizeof(alphabet); i++)
	{
		putchar(alphabets[i]);
	}
}
