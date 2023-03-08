#include "main.h"
#include <math.h>
/**
 *_pow_recursion - exponential function
 *@x: base
 *@y: exponent
 *Return: result of the exponent function
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	result = pow(x, y);

	return (result);
}
