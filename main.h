#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

typedef struct format {
	char *id;
	int (*f)();
} new;


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
void print_buffer(char buffer[], int *buff_ind);
int print_flags(const char *format, int *i);
int print_precision(const char *format, int *i, va_list args);
int print_size(const char *format, int *i);
int print_width(const char *format, int *i, va_list args);
int is_digit(char c);
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define LONG 2
#define SHORT 1


#endif
