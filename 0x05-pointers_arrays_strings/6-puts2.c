#include "main.h"
/**
 * puts2 - prints every other characster of a string
 * @str: Strng
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i = i + 2;
	}
}
