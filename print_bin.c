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
    int i;
    int flag = 0;

    for (i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        if (bit == 1)
            flag = 1;
        if (flag)
        {
            _putchar(bit + '0');
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
