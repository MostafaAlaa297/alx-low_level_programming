/**
 * calculate_sqrt - Returns the calculation of the
 * natural square root of a number
 * @n: The number to get its square root
 * @guess: The guess of the square root of n
 *
 * Return: If n does not have a natural square root,
 * the function should return -1, otherwise,
 * it returns the square root
 */

int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess); /* Found the square root*/

	if (guess * guess > n)
		return (-1); /* n doesn't have a natural square root */

	return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to get its square root
 *
 * Return: If n does not have a natural square root,
 * the function should return -1, otherwise,
 * it returns the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Negative number, no square root */

	if (n == 0 || n == 1)
		return (n); /* Square root of 0 is 0, square root of 1 is 1 */

	return (calculate_sqrt(n, 1)); /* Start the search with a guess of 1 */
}
