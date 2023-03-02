#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *  _strcat - function to concat 2 strings
 *  @dest: 1 string
 *  @src: 2nd string
 *  Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) + 1);

	strcpy(result, dest);
	strcat(result, src);
	return (result);
}
