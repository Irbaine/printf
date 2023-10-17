#include "main.h"
#include <stdarg.h>
/**
 * print_ex_string - prints exclusive strings non-printable
 * @str: the string to be printed
 * Return: the number of characters printed
 */

int print_string(va_list str)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(str, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len += print_HEX_extra(value);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}

	return (len);
}

