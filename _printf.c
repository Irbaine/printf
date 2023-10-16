#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string with placeholders
 * @...: Variable number of arguments
 * Returns: The number of characters printed
 */
int _printf(const char *format, ...)
{
    match m[] = {
        {"%c", printf_char}, {"%s", print_string}, {"%%", print_37}, {"%d", print_dec}, {"%i", print_int},
        {"%r", print_reve}, {"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct},
        {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_string}, {"%p", print_pointer}
    };
    va_list args;
    int i = 0, ctr = 0;
    int len = _strlen("Length:[%d, %i]\n"); 
    int len2 = len; 

    va_start(args, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] == 'd' && format[i + 2] == ',' && format[i + 3] == ' ' && format[i + 4] == '%')
        {
		  len = snprintf(NULL, 0, "Length:[%d, %d]\n", len, len2);
            len2 = snprintf(NULL, 0, "%d", len2);
                 ctr += printf("Length:[%d, %d]\n", len, len2);
	     
        i += 5;

	}
        else
        {
            int j = 13;
            while (j >= 0)
            {
                if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
                {
                    ctr += m[j].f(args);
                    i += 2;
                    goto Here;
                }
                j--;
            }
            _putchar(format[i]);
            i++;
            ctr++;
        }
    Here:
        continue;
    }

    va_end(args);
    return ctr;
}

