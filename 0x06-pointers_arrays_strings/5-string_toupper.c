#include "main.h"
#include <ctype.h>
/**
 * string_toupper - Change lowercase to uppercase
 * @arr: string to be converted
 * Return: 0
 */
char *string_toupper(char arr[])
{
	int j = 0;

	while (arr[j] != '\0')
	{
		if (arr[j] >= 'a' && arr[j] <= 'z')
		{
			arr[j] = arr[j] - 32;
		}
		j++;
	}
	return (arr);
}
