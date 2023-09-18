#include "main.h"
/**
 *print_bin - function to convert int to binary
 *
 *@varg: number to print
 *Return: (value).
*/
int print_bin(va_list varg)
{
	unsigned int number = va_arg(varg, unsigned int);

	if (number > 0)
	{
		return (bin_recur(number));
	}
	else
	{
		_putchar('0');
		return (1);
	}
}
/**
 * bin_recur - a function to print binary
 * @value: input number to check.
 * Return: (length).
 */
int bin_recur(unsigned int value)
{
	int len = 0;

	if (value == 0)
	{
		return (0);
	}
	else
	{
		len = (1 + bin_recur(value / 2));
		_putchar((value % 2) + '0');
	}
	return (len);
}
