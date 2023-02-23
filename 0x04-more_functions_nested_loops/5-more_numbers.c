#include "main.c"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int i, count;

	for (i = 0; i <= 4; i++)
	{
		for (count = 0; count <= 10; count++)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
