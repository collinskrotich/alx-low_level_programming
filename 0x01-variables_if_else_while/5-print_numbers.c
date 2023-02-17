#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void) /* main function */
{
	int dc;

	for (dc = 0; dc <= 9; dc++)
	{
		printf("%d", dc);
	}
	printf("\n");
	return (0);
}
