#ifndef MAIN_H
#define MAIN_H

/********Headers_Declarations******/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

/***********Struct_Declarations**********/
/**
 * pformt: Structure name.
 * @symbol: Input symbol
 * print - function pointer
 */
typedef struct pformat
{
    char symbol;
    int (*print)(va_list varg);
} prtmt;

/*******Function_Declarations************/
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list varg);
int print_str(va_list varg);
int print_modular(va_list varg);

#endif /*MAIN_H*/
