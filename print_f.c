#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - prints characters based of the format
 * @format: character format
 * Return: number of character printed
 */
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
				return (count);
			_writechar(*format);
			count++;
			format++;
		}
		format++;
		func = choose_print(*format);
		if (func == NULL)
		{
			count += _writechar('%');
			count += _writechar(*format);
		}
		else
		{
			count += func(args);
		}
		format++;
	}
	return (count);
}
