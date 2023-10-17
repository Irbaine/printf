#include "main.h"
/**
 * print_rot13 - convert string into ROT13 encoding
 * @val: values includes strings for convertion
 * Return: Number of printed characters
 */

int print_rot13(va_list val)
{
	int i, j, ctr = 0;
	int v = 0;
	char *s = va_arg(val, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i]; i++)
	{
		v = 0;
		for (j = 0; a[j] && !v; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				ctr++;
				v = 1;
			}
		}
		if (!v)
		{
			_putchar(s[i]);
			ctr++;
		}
	}
	return (ctr);
}
