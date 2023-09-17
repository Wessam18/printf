#include "main.h"
#include <string.h>

int print_char(va_list varg)
{
       _putchar(va_arg(varg, int));
       return (1);
}
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
       return(strlen(str));
}

int print_modular(va_list varg)
{
       (void) varg;
       _putchar('%');
       return (1);       
}
