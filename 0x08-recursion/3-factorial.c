/**
 * factorial - Get the factorial of a number
 * @n: The number to calculate its factorial
 *
 * Return: If number is 0 or 1, it returns 1,
 * and if it is lower than 0, it returns -1,
 * otherwise, it calculates the factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
