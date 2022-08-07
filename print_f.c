#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
int _printf(char *format, ...)
{
	va_list args;

	char *s;
	double f;
	int d;
	va_start(args, format);
	while (*format != '\0')
	{
		while (*format != '%')
		{
			if (*format == '\0')
				return (0);
			_writechar(*format);
			format++;
		}
		format++;
		if (*format == 's')
		{
			s = va_arg(args, char *);
			writechars(s);
		}

		if (*format == 'd')
		{
			d = va_arg(args, int);
			if (d < 0)
			{
				d = d * -1;
				_writechar('-');
			}
			s = convert(d, 10);
			writechars(s);
		}
		if (*format == 'x')
		{
			int d = va_arg(args, int);
			printf("%d", d);
			s = convert(d, 16);
			writechars(s);
		}
		if (*format == 'b')
		{
			int d = va_arg(args, int);
			s = convert(d, 2);
			writechars(s);
		}

		if (*format == 'c')
		{
			_writechar(va_arg(args, int));
		}
		if (*format == 'f')
		{
			f = va_arg(args, double);
			_writechar(f + '0');
		}
		if (*format == 'o')
		{
			int d = va_arg(args, int);
			s = convert(d,8);
			writechars(s);
		}

		format++;
	}
	return (0);
}
