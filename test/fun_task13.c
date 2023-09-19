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
	int i, x;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x = (i - 1); x >= 0; x--)
	{
		_putchar(str[x]);
	}
	return (i);
}
