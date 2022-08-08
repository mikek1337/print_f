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
	s = convert(d, 16, 1);
	return (writechars(s));
}

/**
 * p_HEX - print hex capital
 * @l: variable list
 * Return: number of characters printed
 */
int p_HEX(va_list l)
{
	 int d;
	 char *s;
	d = va_arg(l, unsigned int);
	s = convert(d, 16, 0);
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
	s = convert(d, 8, 0);
	return (writechars(s));
}

/**
 * p_percent - prints percent sign
 * @l: variable list
 * Return: number of characters printed
 */
int p_percent(va_list l)
{
	va_arg(l, int);
	return (_writechar('%'));
}

/**
 * p_unsigned - prints unsigned int
 * @l: variable list
 * Return: number of characters printed
 */
int p_unsigned(va_list l)
{
	 char *s;
	 unsigned int d = va_arg(l, unsigned int);
	s = convert(d, 10, 0);
	return (writechars(s));
}
