#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int dc;
	char com = ',';

	for (dc = 0; dc <= 9; dc++)
	{
		if (dc != 9)
		{
			putchar((dc % 10) + '0');
			putchar(com);
		}
		else
		{
			putchar((dc % 10) + '0');
		}
	}
}
