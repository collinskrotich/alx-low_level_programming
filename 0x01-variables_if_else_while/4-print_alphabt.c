#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,then in uppercase.
 * Return: Always 0
 */
int main(void) /* main function */
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar ("\n");
	return (0);
}
