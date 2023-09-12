#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/* declare local variables*/
	char c;
	int i;
	/* nested for loop and this is for number of times */
	for (i = 0; i < 10; i++)
	{
		/* loop for alphabets */
		for (c = 'a'; c <= 'z'; c++)
		{
			/* print each alphabet */
			_putchar(c);
		}
		/* print newline each time  */
		_putchar('\n');
	}

}
