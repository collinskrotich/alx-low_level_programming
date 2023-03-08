#include "main.h"
/**
 *factorial - function to print factorial of int n
 *@n: int to find factorial
 *Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

