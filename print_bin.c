#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned integer
 * @val: The unsigned integer to print
 * Return: The number of characters printed
 */
int print_bin(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    int cont = 0;
    int i,a = 1 , b;
    int flag = 0;
     unsigned int p;

    for (i = 31 ; i >= 0; i--)
    {
        p = ((a << i) & num);
	if (p)
            flag = 1;
        if (flag)
        {
		b = p >> i;
            _putchar(b +48);
            cont++;
        }
  }

    if (cont == 0)
    {
        cont++;
        _putchar('0');
    }

    return cont;
}
