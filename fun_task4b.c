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

	if (number > 0)
	{
		return (hexs_recur(number));
	}
	else
	{
		_putchar('0');
		return (1);
	}
}
/**
 * hexs_recur - a function to print hexadecimal
 * @value: input number to check.
 * Return: (length).
 */
int hexs_recur(unsigned long int value)
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
			len = (1 + hexs_recur(value / 16));
			_putchar((value % 16) + '0');
		}
		else
		{

			len = (1 + hexs_recur(value / 16));
			_putchar((value % 16) + 87);
		}
	}
	return (len);
}
