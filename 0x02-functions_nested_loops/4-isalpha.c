#include "main.h"
/**
 * _isalpha - Checks for alphabet
 * Return: 1 if alphabet, 0 if otherwise
 * @c: Checks if alphabet
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
