#include "main.h"
#include <string.h>
/**
 * _strspn - get length of a prefix substring
 *@s: string
 *@accept: string prefix
 *Return: int length
 */
unsigned int _strspn(char *s, char *accept)
{
	int num;

	num = strspn(s, accept);
	return (num);
	putchar('\n');
}
