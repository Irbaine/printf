#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#define UNUSED(x) (void)(x)
typedef struct format {
	char *id;
	int (*f)();
} match;


int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_str(va_list val);
int _strlen(char *s);
int _strlenC(const char *s);
int print_37(void);
int print_int(va_list ar);
int print_dec(va_list ar);
int print_bin(va_list val);
int print_unsigned(va_list ar);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int val);
int print_string(va_list str);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int val);
int print_reve (va_list val);
int print_rot13(va_list val);
int apply_flags_for_signed_number(int flags, int num, char conversion_specifier);
int apply_flags_for_hex(int flags, unsigned int num, char conversion_specifier);
#endif
