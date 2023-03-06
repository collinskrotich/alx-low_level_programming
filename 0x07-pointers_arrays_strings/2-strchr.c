#include "main.h"
#include <string.h>

/**
 *_strchr - function that locates string in string
 * @s: string to test
 * @c: character to find in string
 * Return: pointer to 1st occurence of char c
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);
	putchar ('\n');
}

