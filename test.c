#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
       int len;
       int len2;
       unsigned int ui;
       void *addr;

       (void) len2;
       (void) ui;
       (void) addr;

       len = _printf("%c", 'A');
       printf("%d\n", len);
  
       len = printf("%c", 'A');
       printf("%d\n", 'A');
       
       len = _printf("%s", NULL);
       printf("%d\n", len);
       
       len = printf("%s", NULL);
       printf("%d\n", len);
       
       len = _printf("Let's try to printf a simple sentence.\n"); 
       printf("%d\n", len);
       
       len = printf("Let's try to printf a simple sentence.\n");
       printf("%d\n", len);

       return (0);
}
