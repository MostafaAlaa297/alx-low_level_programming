#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that sums all its parameters
 * @n: The number of function arguments
 *
 * Return: The sum of all arguments, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	
	va_end(ptr);

	return (sum);
}
