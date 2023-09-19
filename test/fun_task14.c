#include "main.h"

/**
 * prot13 - printing a string using rot13
 * @varg: input element.
 * Return: (Success) 0
 */
int prot13(va_list varg)
{
	char *str = va_arg(varg, char*);
	int a;
	char result[1024];

	if (str == NULL)
		return (-1);

	else
	{
		rot13_recur(str, result);
		for (a = 0; result[a] != '\0'; a++)
		{
			_putchar(result[a]);
		}
	}

	return (0);
}
/**
 * rot13_recur - rotating the string.
 * @str: input string.
 * @result: output string.
 */
void rot13_recur(char *str, char *result)
{
	int x;

	if (str == NULL)
		return;

for (x = 0; str[x] != '\0'; x++)
{
	char output = str[x];

if ((output >= 'a' && output <= 'm') || (output >= 'A' && output <= 'M'))
	result[x] = str[x] + 13;

else if ((output >= 'n' && output <= 'z') || (output >= 'N' && output <= 'Z'))
	result[x] = str[x] - 13;
else
result[x] = str[x];
}

	result[x] = '\0';
}
