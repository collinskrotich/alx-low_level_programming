#include "main.h"
#include <string.h>
/**
 * _memcpy - pointer
 *@dest: destination
 * @src: source
 * @n: integer
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (0);
	putchar('\n');
}
