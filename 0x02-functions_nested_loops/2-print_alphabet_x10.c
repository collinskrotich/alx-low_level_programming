#include "main.h"
/**
 * print_alphabet_x1 - prints 10x the alphabet, in lowercase,new line.
 */

void print_alphabet_x10(void)
{
	int i;
	char ltr;

	for (i = 0; i < 10; i++)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
}
