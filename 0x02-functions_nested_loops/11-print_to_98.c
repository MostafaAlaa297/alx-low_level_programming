#include "main.h"

void print_to_98(int n)
{
	int i;
	
	for (i = n; i < 98; i++)
	{
		if (i < 0)
		{
			_putchar('-');
			i = -i;
		}
		if (i < 10)
			_putchar(i + '0');
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	
	_putchar('\n');
}