#ifndef MAIN_H
#define MAIN_H

/********Headers_Declarations******/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

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
int pchar(va_list varg);
int pstr(va_list varg);
int pmod(va_list varg);
int pint(va_list varg);
int int_recur(unsigned int value);
int pbin(va_list varg);
int bin_recur(unsigned int value);
int poct(va_list varg);
int oct_recur(unsigned int value);
int phexs(va_list varg);
int hexs_recur(unsigned long int value);
int phexc(va_list varg);
int hexc_recur(unsigned long int value);
int punsign(va_list varg);
int unsign_recur(unsigned int value);
int prev(va_list varg);
int prot13(va_list varg);
int hexc_recurs(unsigned long int value);

#endif /*MAIN_H*/
