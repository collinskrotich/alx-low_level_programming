#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @int: describes the numbers to be entered to the function
 * Return: Absolute number
*/
int _abs(int)
{
	int num;

	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
