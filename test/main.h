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
int int_recur(unsigned int value);
int print_bin(va_list varg);
<<<<<<< HEAD
int bin_recur(long int value);
int print_oct(va_list varg);
int oct_recur(unsigned long int value);
int print_hexs(va_list varg);
int hexs_recur(unsigned long int value);
int print_hexc(va_list varg);
int hexc_recur(unsigned long int value);

=======
int bin_recur(unsigned int value);
int print_rot13(va_list varg);
void rot13_recur(char *str, char *result);
>>>>>>> 5ad98ede15d519f4a3216e1edd4f1969b6250928
#endif /*MAIN_H*/
