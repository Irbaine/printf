#include "main.h"
/**
 * print_bin - prints the binary representation of an unsigned integer
 * @val: The unsigned integer to print
 * Return: The number of characters printed
 *
 */

int print_bin(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int cont = 0;
	int i;
	int flag = 0;
	unsigned int p;

	for (i = 31; i >= 0; i--)
	{
		p = (1u << i) & num;
		if (p)
			flag = 1;
		if (flag)
		{
			int bit = (p >> i) & 1;

			_putchar (bit + '0');
			cont++;
		}
	}

	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}

	return (cont);
}
