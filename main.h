
#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_chooser - choose the right functions to print
 *
 * @c: format specification
 * @f: function to be choosen
 */
typedef struct print_chooser
{
	char c;
	int (*f)(va_list);
} pc;

char *convert(int n, int base, int islowercase);
int _writechar(char c);
int writechars(char *s);
int _printf(char *format, ...);
int (*choose_print(char format))(va_list l);
int p_int(va_list l);
int p_string(va_list l);
int p_char(va_list l);
int p_binary(va_list l);
int p_hex(va_list l);
int p_HEX(va_list l);
int p_octal(va_list l);
int p_percent(va_list l);
int print_address(va_list l);
int print_rev(va_list l);
int print_rot13(va_list l);
int p_unsigned(va_list l);
#endif
