#include "main.h"
#include <string.h>
/**
 * _strcmp - Compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: integer with difference
 */

int _strcmp(char s1[100], char s2[100])
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
