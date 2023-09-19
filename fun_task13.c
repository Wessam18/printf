#include "main.h"
/**
 *prev - function print string in reverse
 *@varg: argument to print
 *Return: len
*/
int prev(va_list varg)
{
char *str = va_arg(varg, char *);
	if (str == NULL)
	{
		return (0);
	}
	return (rev_recur(str));
}
/**
 *rev_recur - print the string
 *
 *@str: string to print
 *Return: len
*/
int rev_recur(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
