#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,then in uppercase.
 * Return: Always 0
 */
int main(void) /* main function */
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);

	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
