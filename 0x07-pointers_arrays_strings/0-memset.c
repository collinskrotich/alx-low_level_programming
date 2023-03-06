#include "main.h"
#include <string.h>

/**
 * _memset - Pointer
 * Return: 0
 * @s: pointer
 * @b: char to be entered
 * @n: int
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
