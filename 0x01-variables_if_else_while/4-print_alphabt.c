#include <stdio.h>
/**
 * main - End Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'
	};
	
	unsigned long int i;
	
	for (i = 0; i < sizeof(alphabets); i++)
	{
		if(alphabets[i] === 'q' || alphabets[i] === 'e')
			continue;
		else
			putchar(alphabets[i]);
	}
	
	return (0);
}
