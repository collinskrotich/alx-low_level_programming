#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - print string in reverse
 *@s: characters to be reversed
 */
void _print_rev_recursion(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
