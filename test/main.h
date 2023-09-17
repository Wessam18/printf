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
 * struct pformat - structure name for used to get symbols and its functions.
 * @symbol: Input symbol
 * @print: function pointer
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
int print_mod(va_list varg);
int print_int(va_list varg);
int int_recur(int value);
#endif /*MAIN_H*/
