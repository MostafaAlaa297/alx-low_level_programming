/**
 * _abs - compute the absolute value of an integer
 * @n: The integer to be checked
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	/* Conditional if to check for the integer sign */
	if (n < 0)
		return (-n);
	else
		return (n);
}
