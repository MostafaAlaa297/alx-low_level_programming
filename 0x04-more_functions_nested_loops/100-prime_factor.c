#include <stdio.h>
#include <math.h>

/**
 * is_prime - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long n)
{
	long i;
	if (n < 2)
		return (0);
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143, largest = 1;
	long i;
	
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0 && is_prime(i))
		{
			largest = i;
			n /= i;
			
			if (n == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}
	return (0);
}
