#include "main.h"
/**
 *phexs - function to convert int to HEXAdecimal
 *
 *@varg: number to print
 *Return: (value).
*/
int phexs(va_list varg)
{
	unsigned long int number = va_arg(varg, unsigned long int);

	return (intohex(number));
}
/**
 * hexc_recurs - a function to print HEXAdecimal
 * @value: input number to check.
 * Return: (length).
 */
int intohex(unsigned long int x)
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
			len += _putchar((x % 16) + 87);
		}
	}
	else
	{
		len += intohex(x / 16);
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0');
		}
		else
		{
			len += _putchar((x % 16) + 87);
		}
	}
	return (len);
}
