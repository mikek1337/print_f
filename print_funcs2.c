#include <stdarg.h>
#include "main.h"


/**
 * p_hex - prints hex characters
 *
 * @l: variable list
 * Return: number of characters printed
 */
int p_hex(va_list l)
{
	 int d;
	 char *s;
	d = va_arg(l, unsigned int);
	s = convert(d, 16);
	return (writechars(s));
}
/**
 * p_octal - prints octal characters
 * @l: variable list
 * Return: number of characters printed
 */
int p_octal(va_list l)
{
	 int d;
	 char *s;
	d = va_arg(l, unsigned int);
	s = convert(d, 8);
	return (writechars(s));
}

int p_percent(va_list l)
{
	va_arg(l,int);
	return (_writechar('%'));
}
