#include "main.h"
#include <string.h>
/**
 * print_char - printing input char.
 * @varg: Input element to check
 * Return: (1) for char length.
 */
int print_char(va_list varg)
{
	_putchar(va_arg(varg, int));
	return (1);
}
/**
 * print_str - Printing input string.
 * @varg: Input string to check.
 * Return: (Length of the string).
 */
int print_str(va_list varg)
{
	int i;
	char *str = va_arg(varg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (strlen(str));
}
/**
 * print_mod - printing modular symbol
 * @varg: Input percent to check.
 * Return: (1) always 1 to success
 */
int print_mod(va_list varg)
{
	(void) varg;
	_putchar('%');
	return (1);
}
