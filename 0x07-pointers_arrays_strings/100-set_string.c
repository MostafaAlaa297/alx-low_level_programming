/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to the char that we want to
 * change its value
 * @to: The value to change to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
