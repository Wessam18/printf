#include "main.h"
/**
 *print_hexc - function to convert int to HEXAdecimal
 *
 *@varg: number to print
 *Return: (value).
*/
int print_hexc(va_list varg)
{
	unsigned long int number = va_arg(varg, unsigned long int);

	if (number > 0)
	{
		return (hexc_recur(number));
	}
	else
	{
		_putchar('0');
		return (1);
	}
}
/**
 * hexc_recur - a function to print HEXAdecimal
 * @value: input number to check.
 * Return: (length).
 */
int hexc_recur(unsigned long int value)
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
			len = (1 + hexc_recur(value / 16));
			_putchar((value % 16) + '0');
		}
		else
		{
			len = (1 + hexc_recur(value / 16));
			_putchar((value % 16) + 55);
		}
	}
	return (len);
}
