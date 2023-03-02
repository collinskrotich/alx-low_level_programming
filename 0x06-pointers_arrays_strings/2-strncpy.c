#include "main.h"
#include <string.h>

/**
 * _strncpy - Copy a string
 * @dest: String
 * @src: string
 * @n: integer
 * Return: copied string
 */

char *_strncpy(char dest[100], char src[100], int n)
{
	strncpy(dest, src, n);
	return (dest);
}
