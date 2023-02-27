#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 * @s: string to reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int len, g;

	len = strlen(s);
	for (g = len - 1; g >= 0; g--)
	{
		printf("%c", s[g]);
	}
}
