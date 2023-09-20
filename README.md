0x11. C - printf project "ALX"
it is a project for a custom function for the C programming language called _printf.
 It allows us to print various inputs as arguments, combination of strings, integers and different data types.

Synopsis
this repository have all codes our custum function need to run and print output, which writes to stdout.
our custum function returns the total number of characters printed (excluding the null byte at the end of strings) after a successful execution.
If an output error is encountered, a negative value of -1 is returned.
The prototype of this function is: int _printf(const char format, ...);

Each conversion specification is introduced by the character % and ends with a conversion specifier.

Specifier Description:
    c: used to handle characters.
    s: used to handle strings.
    %: used to handle percent
    d: used to handle Decimal Numbers.
    i: another options for handling decimal numbers.
    b: used to handle binary numbers.
    u: used to handel unsigned numbers.
    o: used to handle octal numbers.
    x: used to handle small hexadecimal numbers.
    X: used to handle capital hexadecimal numbers.
    r: used to print a reverse string.
    R: used to print a string using Rot13.

files our repository contian :
_printf.c: hold the main code to run the function
_printf.: man page for our function
_putchar.c: hold function to print
fun_task0.c: hold function that handling c, s and % specifiers.
fun_task1.c: hold function that handling d and i specifiers.
fun_task2.c: hold function that handling b specifier.
fun_task4a.c: hold function that handling o
fun_task4b.c:hold function that handling x
fun_task4c.c:hold function that handling u
fun_task4d.c:hold function that handling X
main.h: 
README.md:

Author
Azzaz Akl | Wessam Abd-elnabi
