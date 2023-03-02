#include "main.h"
/**
 * reverse_array - Reverse content in an array
 * @arr: array of integers
 * @n: no of elements in array
 * Return: o
 */
void reverse_array(int arr[], int n)
{
	int l = 0;
	int r = n - 1;

	while (l < r)
	{
		int temp;

		temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		l++;
		r--;
	}
}
