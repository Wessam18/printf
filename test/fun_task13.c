#include "main.h"
/**
 *prev - function print string in reverse
 *@varg: argument to print
 *Return: len
*/
int prev(va_list varg)
{
char *str = va_arg(varg, char *);
int x = 0, len = 0;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		while (str[len] != '\0')
		{
			len++;
		}
		for (x = (len - 1); x >= 0; x--)
		{
			_putchar(str[x]);
		}
	}
	return (len);
}
