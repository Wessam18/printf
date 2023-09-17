#include "main.h"

/**
 * prinf_int - printing the int values.
 * @varg: Input number to check.
 * Return: (length) of the number.
 */
int print_int(va_list varg)
{
       int number = va_arg(varg, int), len = 0;

       if (number < 0)
       {
              _putchar('-');
              number *= (-1);
              len++;
       }
       len += int_recur(number);
       return (len);
}
int int_recur(int value)
{
       int len;

       len = (1 + int_recur(value / 10));
       _putchar((value % 10) + '0');
       return (len);
}
