#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *ptr = (char *) format;
	int separator = 0;

	va_start(args, format);

	while (ptr && *ptr)
	{
		if (separator && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");
		
		separator = 1;

		switch(*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%.6f", va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
				}
				break;

			default:
				break;
		}

		ptr++;
	}
	va_end(args);
	printf("\n");
}
