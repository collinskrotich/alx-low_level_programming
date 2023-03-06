
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_chessboard - print multi-array
 *@a: gives the row value
 *Return: multi-dimensional array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
