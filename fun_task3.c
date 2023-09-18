#include "main.h"
/**
 *print_bin - function to convert int to binary
 *
 *@varg: number to print
 *Return: (value).
*/
int print_bin(va_list varg)
{
	long int number = va_arg(varg, long int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (number > 0)
	{
		return (bin_recur(number));
	}

	else
	{
		return (1);
	}
}
/**
 * bin_recur - a function to print binary
 * @value: input number to check.
 * Return: (length).
 */
int bin_recur(long int value)
{
	int len = 0;

	if (value == 0)
	{
		return (0);
	}
	len = (1 + bin_recur(value / 2));
	_putchar((value % 2) + '0');
	return (len);
}
