#include "main.h"
/**
 *poct - function to convert int to octal
 *
 *@varg: number to print
 *Return: (value).
*/
int poct(va_list varg)
{
	unsigned int number = va_arg(varg, unsigned int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		return (oct_recur(number));
	}
}
/**
 * oct_recur - a function to print octal
 * @value: input number to check.
 * Return: (length).
 */
int oct_recur(unsigned long int value)
{
	int len = 0;

	if (value == 0)
	{
		
		return (0);
	}
	else
	{
		len = (1 + oct_recur(value / 8));
		_putchar((value % 8) + '0');
	}
	return (len);
}
