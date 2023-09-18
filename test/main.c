#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

        (void) ui;
        (void) addr;
        len = _printf("Character:[%c]\n", 'H');
        printf("%d\n", len);
        len = printf("Character:[%c]\n", 'H');
        printf("%d\n", len);

        len = _printf("%s\n", NULL);
        printf("%d\n", len);
        len = printf("%s\n", NULL);
        printf("%d\n", len);
        
        len = _printf("Let's try to printf a simple sentence.\n");
        printf("%d\n", len);
        len = printf("Let's try to printf a simple sentence.\n");
        printf("%d\n", len);

        printf("****************************TASK1*******************\n");
        len = _printf("%d\n", 2048);
        printf("%d\n", len);
        len = printf("%d\n", 2048);
        printf("%d\n", len);

        len = _printf("%d", INT_MAX);
        printf("%d\n", len);
        len = printf("%d", INT_MAX);
        printf("%d\n", len);

        len = _printf("%d", INT_MIN);
        printf("%d\n", len);
        len = printf("%d", INT_MIN);
        printf("%d\n", len);

        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len, len);

        len2 = _printf("String:[%s%s]\n", "I am a string !", "second string !");
        printf("Length:[%d, %i]\n", len, len);

	    len = _printf("Number: %d, %i\n", 4034, 4034);
	    len2 = printf("Number: %d, %i\n", 4034, 4034);
	    printf("Len:[%d]\n", len);
	    printf("Lelen:[%d]\n\n", len2);

	    len = _printf("Negative: %i, %d\n", -4034, -4034);
	    len2 = printf("Negative: %i, %d\n", -4034, -4034);
	    printf("Len:[%d]\n", len);
	    printf("Lelen:[%d]\n\n", len2);

	    len = _printf("NULL: %i\n", NULL);
	    len2 = printf("NULL: %i\nlenlen", NULL);
	    printf("Len:[%d]\n", len);
	    printf("Lelen:[%d]\n\n", len);

	    len = _printf("%d\n", INT_MAX);
	    len2 = printf("%d\n", INT_MAX);
	    printf("Len:[%d]\n", len);
	    printf("Lelen:[%d]\n\n", len2);

	    len = _printf("%d\n", INT_MIN);
	    len2 = printf("%d\n", INT_MIN);
	    printf("Len:[%d]\n", len);
	    printf("Lelen:[%d]\n\n", len2);

        len = _printf("\nNumber: [%d], [%i]\n", 4034, 4034);
        len2 = printf("Number: [%d], [%i]\n", 4034, 4034);
        printf("Len:[%d]\n", len);
        printf("Lelen:[%d]\n\n", len2);

        len = _printf("Negative: [%i], [%d]\n", -4034, -4034);
        len2 = printf("Negative: [%i], [%d]\n", -4034, -4034);
        printf("Len:[%d]\n", len);
        printf("Lelen:[%d]\n\n", len2);

        len = _printf("long: [%i], [%d]\n", 4545439394949595, 4545439394949595);
        len2 = printf("long: [%i], [%d]\n", 4545439394949595, 4545439394949595);
        printf("Len:[%d]\n", len);
        printf("Lelen:[%d]\n\n", len2);

        len = _printf("Greater than int: [%i], [%d]\n", 454543939494, 454543939494);
        len2 = printf("Greater than int: [%i], [%d]\n", 454543939494, 454543939494);
        printf("Len:[%d]\n", len);
        printf("Lelen:[%d]\n\n", len2);

        len = _printf("N-Greater than int: [%i], [%d]\n", -454543939494, -454543939494);
        len2 = printf("N-Greater than int: [%i], [%d]\n", -454543939494, -454543939494);
        printf("Len:[%d]\n", len);
        printf("Lelen:[%d]\n\n", len2);

        len = _printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595);
        len2 = printf("long: [%i], [%d]\n", -4545439394949595, -4545439394949595);
        printf("Len:[%d]\n", len);

    printf("Lelen:[%d]\n\n", len2);

    len = _printf("NULL: [%i]\n", NULL);
    len2 = printf("NULL: [%i]\n", NULL);
    printf("Len:[%d]\n", len);
    printf("Lelen:[%d]\n\n", len2);

    len = _printf("Zero: [%i]\n", ZERO);
    len2 = printf("Zero: [%i]\n", ZERO);
    printf("Len:[%d]\n", len);
    printf("Lelen:[%d]\n\n", len2);

    len = _printf("[%d]\n", INT_MAX);
    len2 = printf("[%d]\n", INT_MAX);
    printf("Len:[%d]\n", len);
    printf("Lelen:[%d]\n\n", len2);

    len = _printf("[%d]\n", INT_MIN);
    len2 = printf("[%d]\n", INT_MIN);
    printf("Len:[%d]\n", len);
    printf("Lelen:[%d]\n\n", len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    len = (unsigned int)INT_MAX + 1024;
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    _printf(NULL);
    printf(NULL);
    
    _printf("%b\n", 98);

    /* ;
    addr = (void *)0x7ffe637541f0;

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/

    return (0);
}
