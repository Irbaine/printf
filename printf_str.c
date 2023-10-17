#include"main.h"
/**
* printf_str ;print a string.
* @val: argument.
* Return: the length of the string.
**/

int printf_str(va_list val)
{
	char *str = va_arg(val, char *);
	int length = (str != NULL) ? _strlen(str) : 6;
	int i;

	for (i = 0; i < length; i++)
		_putchar((str != NULL) ? str[i] : "(null)"[i]);
	return (length);
}
