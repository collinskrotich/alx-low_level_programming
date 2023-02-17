#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if number is positive, negative or 0
 * Return: Always 0
 */
int main(void) /* main function */
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
	printf("%d Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("%d Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("%d Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
