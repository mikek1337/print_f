#include <stdarg.h>
#include "main.h"


/**
 * p_int - prints integer numbers
 * @l: argument list
 * Return: number of characters
 */
int p_int(va_list l)
{
	 char *s;
	 int d;
	d = va_arg(l, int);
	if (d < 0)
	{
		d = d * -1;
		_writechar('-');
	}
	s = convert(d, 10, 0);
	return (writechars(s));
}

/**
 * p_string - print string
 *
 * @l: variable list
 * Return: number of characters printed
 */
int p_string(va_list l)
{
	 char *s;
	s = va_arg(l, char *);
	if (!s)
		return (writechars("(null)"));
	return (writechars(s));
}

/**
 * p_char - prints characters
 *
 * @l: variable list
 * Return: the number of character
 */

int p_char(va_list l)
{
	_writechar(va_arg(l, int));
	return (1);
}

/**
 * p_binary - prints binary numbers
 *
 * @l: variable list
 * Return: number of characters printed
 */

int p_binary(va_list l)
{
	 char *s;
	 int d;
	d = va_arg(l, int);
	s = convert(d, 2, 0);
	return (writechars(s));
}
