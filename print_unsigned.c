#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @ar: argument to print
 * Return: number of characters printed
 */
int print_unsigned(va_list ar)
{
    unsigned int n = va_arg(ar, unsigned int);
    int i = 0;

    if (n == 0) {
        _putchar('0');
        return 1;
    }

    while (n > 0) {
        int digit = n % 10;
        _putchar(digit + '0');
        n /= 10;
        i++;
    }

    return i;
}
