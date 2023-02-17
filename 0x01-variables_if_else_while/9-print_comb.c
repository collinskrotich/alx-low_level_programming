#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int dc;

	for (dc = 0; dc <= 9; dc++)
	{
		putchar((dc % 10) + '0');
		if (dc != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
