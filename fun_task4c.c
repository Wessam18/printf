#include "main.h"

/**
 * punsign - printing the int values.
 * @varg: Input number to check.
 * Return: (length) of the number.
 */
int punsign(va_list varg)
{
	unsigned int number = va_arg(varg, int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	return (int_recur(number));
}
/**
 * unsign_recur - calculating the length of each value.
 * @x: Input number.
 * Return: (Length of number).
 */
int unsign_recur(unsigned int x)
{
	int len = 0;

	if (x == 0)
	{
		return (1);
	}

	if (x / 10 == 0)
	{
		len += _putchar((x % 10) + '0');
	}
	else
	{
		len += unsign_recur(x / 10);
		len += _putchar((x % 10) + '0');
	}
	return (len);
}
