#include "main.h"

int print_char(va_list varg)
{
       fputc(va_arg(varg, int), stdout);
       return (1);
}
