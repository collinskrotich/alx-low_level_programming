#include "main.h"
#include <string.h>
/**
 *_strstr - locates substring. terminating null bytes not considered.
 * @haystack: string
 * @needle: string to be found
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);
	return (ptr);
	putchar('\n');
}
