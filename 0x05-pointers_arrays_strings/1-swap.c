#include "main.h"
/**
 * swap_int- Swaps the values of 2 integers
 * @a: Integer to be swapped
 * @b: Integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
