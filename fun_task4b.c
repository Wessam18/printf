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
	int len = 0, rem, x;
	char hexa[100];

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (number != 0)
		{
			rem  = number % 16;

			if (rem < 10)
			{
				hexa[len] = rem + 48;
			}
			else
			{
				hexa[len] = rem + 55;
			}
			number /= 16;
			len++;
		}
		for (x = (len - 1); x >= 0; x--)
		{
			_putchar(hexa[x]);
		}
	}
	return (len);
}
