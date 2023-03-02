#include "main.h"
#include <string.h>
/**
 * _strncat- Concatenate 2 strings
 * @dest: 1 string
 * @src: 2nd string
 * @n: integer
 * Return: dest
 */

char *_strncat(char dest[50], char src[50], int n)
{
	strncat(dest, src, n);
	return (dest);
}
