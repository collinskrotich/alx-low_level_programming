#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked.
 * Return: 0
 */

int _isupper(int c)
{
	int num;

	if (c >= 'a' && c <= 'z')
	{
		num = 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		num = 1;
	}
	return (num);
}
