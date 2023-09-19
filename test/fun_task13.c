#include "main.h"
/**
 *prev - function print string in reverse
 *@varg: argument to print
 *Return: len
*/
int prev(va_list varg)
{
char *s = va_arg(varg, char *);
int i = 0, len;
	if (s == NULL)
	{
		return (0);
	}
	len = strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
