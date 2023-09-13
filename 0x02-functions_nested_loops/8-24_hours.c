#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	/* Local variables declaration */
	int hour, minute;

	/* Nested loops to print every minute of the day */
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0'); /* Prints second digit from the left */
			_putchar((hour % 10) + '0'); /* Prints first digit on the left */
			_putchar(':'); /* Prints the colon that divides hours and minutes */
			_putchar((minute / 10) + '0'); /* Prints the digit on the left */
			_putchar((minute % 10) + '0'); /* Prints the digit on the right */
			_putchar('\n'); /* Prints the newline */
		}
	}
}
