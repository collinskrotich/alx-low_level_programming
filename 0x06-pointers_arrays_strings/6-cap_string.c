#include "main.h"
/**
 * cap_string - Capitalise 1st letter of words in a string
 * @a: array with strings
 * Return: Capitalised sentence
 */
char *cap_string(char a[])
{
	int i;

	if (a[0] >= 97 && a[0] <= 122)
	{
		a[0] -= 32;
	}
	i = 1;

	while (a[i] != '\0')
	{
		if (a[i - 1] == 32 || a[i - 1] == 46 || a[i -1] == '\n' || a[i -1] == '\t')
		{
			if (a[i] > 97 && a[i] <= 122)
			{
				a[i] -= 32;
			}
		}
		i++;
	}
	return (a);
}
