#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

typedef struct pformat
{
    char symbol;
    int (*print)(va_list varg);
} prtmt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list varg);
int print_str(va_list varg);
int print_modular(va_list varg);


#endif /*MAIN_H*/
