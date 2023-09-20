#include "main.h"
/**
 *phexc - function to convert int to HEXAdecimal
 *
 *@varg: number to print
 *Return: (value).
*/
int phexc(va_list varg)
{
	unsigned long int number = va_arg(varg, unsigned long int);

	return (hexc_recur(number));
}
/**
 * hexc_recur - a function to print HEXAdecimal
 * @x: input number to check.
 * Return: (length).
 */
int hexc_recur(unsigned long int x)
{
	int len = 0;

	if (x / 16 == 0)
	{
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0');
		}
		else
		{
			len += _putchar((x % 16) + 55);
		}
	}
	else
	{
		len += hexc_recur(x / 16);
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0');
		}
		else
		{
			len += _putchar((x % 16) + 55);
		}
	}
	return (len);
}
