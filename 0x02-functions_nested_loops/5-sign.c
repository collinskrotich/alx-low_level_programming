/**
 * print_sign - prints the sign of a number.
 * @n: is the integer being checked if positive or negative
 * Return: 1 if n  > 0, 0 if n = 0, -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		return (-1);
	}
}
