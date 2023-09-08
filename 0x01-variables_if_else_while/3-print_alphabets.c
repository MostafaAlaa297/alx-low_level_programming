#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
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

    unsigned long i;
    for (i = 0; i < sizeof(alphabets); i++)
    {
        putchar(alphabets[i]);
	putchar(toupper(alphabets[i]));
    }

    return 0;
}
