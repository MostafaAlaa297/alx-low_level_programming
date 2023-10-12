#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - Prints numbers followed by newline
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list nums;

	if (separator == NULL)
		return;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(nums, int);
		char num_str[12];
		_itoa(num, num_str);

		for (j = 0; num_str[j] != '\0'; j++)
			_putchar(num_str[j]);

		if (i < n - 1 && separator != NULL)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				_putchar(separator[j]);
			}
		}
	}
	_putchar('\n');

	va_end(nums);

}
