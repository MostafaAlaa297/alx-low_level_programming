/**
 * _itoa - Converts an intefer to a string
 * @num: The integer to convert
 * @str: An array of characters to store the string
 */

void _itoa(int num, char *str)
{
	int i = 0, j, is_negative = 0;
	int len;

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    if (num < 0)
    {
        is_negative = 1;
        num = -num;
    }

    while (num != 0)
    {
        int digit = num % 10;
        str[i++] = digit + '0';
        num /= 10;
    }
        if (is_negative)
                str[i++] = '-';

        str[i] = '\0';

        len = i;

	for (j = 0; j < len / 2; j++)
	{
		char temp = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = temp;
	}
}
