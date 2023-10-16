#include "main.h"
/**
 * print_rot13 - convert a string to ROT13 encoding and print it
 * @val: Arguments, including a string to convert
 * Return: The number of characters printed
 */
int print_rot13(va_list val) {
    int i, j, ctr = 0;
    int k = 0;
    char *s = va_arg(val, char*);
    char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

    if (s == NULL) {
        s = "(null)";
    }

    for (i = 0; s[i]; i++) {
        k = 0;
        for (j = 0; a[j] && !k; j++) {
            if (s[i] == a[j]) {
                _putchar(b[j]);
                ctr++;
                k = 1;
            }
        }
        if (!k) {
            _putchar(s[i]);
            ctr++;
        }
    }

    return ctr;
}
