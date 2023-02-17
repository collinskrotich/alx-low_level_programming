#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void) /* main function */
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
~

