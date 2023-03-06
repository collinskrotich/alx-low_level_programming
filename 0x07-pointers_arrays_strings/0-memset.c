#include "main.h"
#include <string.h>

/**
 * _memset - Pointer
 * Return: pointer to s
 * @s: pointer
 * @b: char to be entered
 * @n: int
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
	putchar('\n');
}
