#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *  _strcat - function to concat 2 strings
 *  @dest: 1 string
 *  @src: 2nd string
 *  Return: concatenated string
 */

char *_strcat(char dest[50], char src[50])
{
	strcat(dest, src);
	return (dest);
}
