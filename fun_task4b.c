#include "main.h"
/**
 *phexs - function to convert int to HEXAdecimal
 *
 *@varg: number to print
 *Return: (value).
*/
int phexs(va_list varg)
{
	unsigned long int number = va_arg(varg, unsigned long int);

	return (hexc_recurs(number));
}
/**
 * hexc_recurs - a function to print HEXAdecimal
 * @value: input number to check.
 * Return: (length).
 */
int hexc_recurs(unsigned long int value)
{
	int len = 0;

	if (value == 0)
	{
		return (0);
	}
	else
	{
		if ((value % 16) <= 9)
		{
			len = (1 + hexc_recurs(value / 16));
			_putchar((value % 16) + '0');
		}
		else
		{
			len = (1 + hexc_recurs(value / 16));
			_putchar((value % 16) + 87);
		}
	}
	return (len);
}
