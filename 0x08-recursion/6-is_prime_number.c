/**
 * check_prime - Checks if an integer is a prime number
 * @n: The integer to be checked
 * @divisor: The number to divide n with to
 * test if n is prime or not
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int check_prime(int n, int divisor)
{
	if (divisor == 1)
	{
		/* n is prime because it's only divisible by 1 and itself */
		return (1);
	}

	if (n % divisor == 0)
	{
		/* n is not prime because it's divisible by
		 * a number other than 1 and itself */
		return (0);
	}

	return (check_prime(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* 0 and 1 are not prime numbers */

	return (check_prime(n, n - 1));
}
