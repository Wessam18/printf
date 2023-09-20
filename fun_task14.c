#include "main.h"
#include <string.h>

/**
 * prot13 - printing a string using rot13
 * @varg: input element.
 * Return: (Success) 0
 */
int prot13(va_list varg)
{
	char *str = va_arg(varg, char*);
	int len = 0;
	char c;

	while(*str)
	{
		if (isalpha(*str))
		{
			c = *str;
			if (isupper(c))
			{
				c = 'A' + (c - 'A' + 13) % 26;
			}
			else
			{
				c = 'a' + (c - 'a' + 13) % 26;
			}
			_putchar(c);
			len++;
		}
		else
		{
			_putchar(*str);
			len++;
		}
		str++;
	}
	return (len);
}
