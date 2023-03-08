#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_print_rev_recursion - print string in reverse
 *@s: characters to be reversed
 */
void _print_rev_recursion(char s[100])
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
