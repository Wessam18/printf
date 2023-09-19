#include "main.h"
/**
 * _printf - our printf function.
 * @format: Input format.
 * Return: (Length)
 */
int _printf(const char *format, ...)
{
	va_list vlist;
	int len = 0, i = 0, j;
	prtmt format_functions[] = { {'c', pchar}, {'s', pstr},
	{'%', pmod}, {'d', pint}, {'i', pint}, {'b', pbin}, {'o', poct},
	{'x', phexs}, {'X', phexc}, {'R', prot13}, {'u', punsign}, {'r', prev}, };

	/*checking validation of format*/
	if (format == NULL || (format[i] == '%' && (format[i + 1]) == '\0'))
		return (-1);
	/*printing the statement*/
	va_start(vlist, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		} else
		{
			i++;
			for (j = 0; j < 12; j++)
			{
				/****Checking if symbol the same in our vlist*****/
				if (format[i] == format_functions[j].symbol)
				{
					/****calling the function of its symbol related to it****/
					len += format_functions[j].print(vlist);
					break;
				} }
			if (j >= 12)
			{
				i--;
				_putchar(format[i]);
				len++;
			} }
		i++;
	}
	va_end(vlist);
	return (len);
}
