#include "main.h"
/**
 *phexc - function to convert int to hexadecimal
 *
 *@varg: number to print
 *Return: (value).
*/
int phexc(va_list varg)
{
	unsigned long int number = va_arg(varg, unsigned long int);
	int len = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (number > 0)
		{
			int rem  = number % 16;

			if (rem < 10)
			{
				_putchar(rem + '0');
			}
			else
			{
				_putchar(rem - 10 + 'A');
			}
			number /= 16;
			len++;
		}
	}
	return (len);
}
