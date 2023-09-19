#include "main.h"

/**
 * punsign - printing the int values.
 * @varg: Input number to check.
 * Return: (length) of the number.
 */
int punsign(va_list varg)
{
	unsigned int number = va_arg(varg, int), len = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	len += int_recur(number);
	return (len);
}
/**
 * unsign_recur - calculating the length of each value.
 * @value: Input number.
 * Return: (Length of number).
 */
int unsign_recur(unsigned int value)
{
	int len;

	if (value == 0)
	{
		
		return (0);
	}
	len = (1 + unsign_recur(value / 10));
	_putchar((value % 10) + '0');
	return (len);
}
