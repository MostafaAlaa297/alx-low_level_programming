/**
 * _pow_recursion - Raises the value of x to the power of y
 * @x: The number to raise to the power of another number
 * @y: The number to use as the power of another number
 *
 * Return: If y is less than 0, it returns -1,
 * otherwise, it returns the number after raising to a power
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	result = x * _pow_recursion(x, y - 1);
	return (result);
}
