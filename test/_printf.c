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
	prtmt format_functions[] = {
	{'c', print_char}, {'s', print_str}, {'%', print_mod}, {'d', print_int},
<<<<<<< HEAD
	{'i', print_int}, {'b', print_bin}, {'o', print_oct}, {'x', print_hexs},
	{'X', print_hexc}};
=======
	{'i', print_int}, {'b', print_bin}, {'R', print_rot13}, };
>>>>>>> 5ad98ede15d519f4a3216e1edd4f1969b6250928

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
<<<<<<< HEAD
			for (j = 0; j < 9; j++)
=======
			for (j = 0; j < 7; j++)
>>>>>>> 5ad98ede15d519f4a3216e1edd4f1969b6250928
			{
				/****Checking if symbol the same in our vlist*****/
				if (format[i] == format_functions[j].symbol)
				{
					/****calling the function of its symbol related to it****/
					len += format_functions[j].print(vlist);
					break;
				} }
<<<<<<< HEAD
			if (j >= 9)
=======
			if (j >= 7)
>>>>>>> 5ad98ede15d519f4a3216e1edd4f1969b6250928
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
