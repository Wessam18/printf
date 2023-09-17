#include "main.h"

/**
 * print_int - printing the int values.
 * @varg: Input number to check.
 * Return: (length) of the number.
 */
int print_int(va_list varg)
{
	int number = va_arg(varg, int), len = 0;
	unsigned int negative = number;

	if (number < 0)
	{
		_putchar('-');
		negative *= (-1);
		len++;
	}
       else if (number == 0)
       {
              _putchar('0');
              return (1);
       }
	len += int_recur(negative);
	return (len);
}
/**
 * int_recur - calculating the length of each value.
 * @value: Input number.
 * Return: (Length of number).
 */
int int_recur(unsigned int value)
{
	int len;

	if (value == 0)
	{
		return (0);
	}
	len = (1 + int_recur(value / 10));
	_putchar((value % 10) + '0');
	return (len);
}
