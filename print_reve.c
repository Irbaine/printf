#include "main.h"
/**
 * print_reve - print and reverse
 * @val: The values of the string to be printed
 * Return: The number of printed characters
 */

int print_reve(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int k = 0;

	if (s == NULL)
		s = "(null)";
	while (s[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(s[i]);
	return (k);
}
