#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
int _printf(char *format, ...)
{
	va_list args;
	int count = 0;
	int (*func)(va_list);
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
		func = choose_print(*format);
		count += func(args);
		format++;
	}
	return (count);
}
