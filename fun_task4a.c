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

	return (oct_recur(number));
}
/**
 * oct_recur - a function to print octal
 * @x: input number to check.
 * Return: (length).
 */
int oct_recur(unsigned int x)
{
	int len = 0;

	if (x / 8 == 0)
	{

		len += _putchar((x % 16) + '0');

	}
	else
	{
		len += oct_recur(x / 8);
		len += _putchar((x % 8) + '0');
	}
	return (len);
}
