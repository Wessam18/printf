#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: printing character
 * Return: (0) On Success, (-1) On error.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
