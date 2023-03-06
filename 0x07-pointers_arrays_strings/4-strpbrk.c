#include "main.h"
#include <string.h>
/**
 *_strpbrk - searches a string
 *@s: string to search
 *@accept: set of bytes
 *Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
	putchar('\n');
}


