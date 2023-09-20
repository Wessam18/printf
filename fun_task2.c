#include "main.h"
/**
 *pbin - function to convert int to binary
 *
 *@varg: number to print
 *Return: (value).
*/
int pbin(va_list varg)
{
	unsigned int number = va_arg(varg, unsigned int);

	return (bin_recur(number));
}
/**
 * bin_recur - a function to print binary
 * @x: input number to check.
 * Return: (length).
 */
int bin_recur(unsigned int x)
{
	int len = 0;

	if (x / 10 == 0)
	{
		
		len += _putchar((x % 10) + '0');

	}
	else
	{
		len += bin_recur(x / 10);
		len += _putchar((x % 10) + '0');
	}
	return (len);
}
