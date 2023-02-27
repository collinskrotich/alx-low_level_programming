#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @str: string to reverse
 * Return: 0
 */
void rev_string(char *str)
{
	int n = strlen(str);

	for (int i = 0; i < n / 2; i++)
	{
		char ch = str[i];

		str[i] = str[n - i - 1];
		str[n - i - 1] = ch;
	}
	putchar('\n');
}
