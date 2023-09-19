#include "main.h"
/**
 *phexs - function to convert int to hexadecimal
 *
 *@varg: number to print
 *Return: (value).
*/
int phexs(va_list varg)
{
	unsigned long int number = va_arg(varg, unsigned long int);
int len = 0;

	if (number == 0)
	{
		return (0);
	}
	else
	{
		if ((number % 16) <= 9)
		{
			len = (1 + (number / 16));
			_putchar((number % 16) + '0');
		}
		else
		{
			len = (1 + (number / 16));
			_putchar((number % 16) + 87);
		}
	}
	return (len);
}


	