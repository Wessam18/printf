#include "main.h"
/**
 *print_bin - function to convert int to binary
 *
 *@varg: number to print
 *Return: (b)
*/
int print_bin(va_list varg)
{

	unsigned int b = 0;
	unsigned int x = va_arg(varg, int);

	while (x != 0)
	{
		b = b * 10 + (x % 2);
		x /= 2;
	}

	return (b);
}
