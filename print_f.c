#include <stdlib.h>
#include <stdarg.h>
#include "writechar.c"
#include "writechars.c"
#include "convert.c"
int print(char *format,...)
{
	va_list args;
	va_start(args, format);
	
	while(*format != '\0')
	{
		while(*format != '%')
		{
			_writechar(*format);
			format++;
		}
		format++;
		if (*format == 's')
		{
			char *s = va_arg(args, char *);
			writechars(s);
		
		}

		if(*format == 'd')
		{
			int d = va_arg(args, int);
			if (d < 0)
			{
				d = d * -1;
				_writechar('-');

			}
			char * s = convert(d,10);
			writechars(s);
		}
		if(*format == 'x')
		{
			int d = va_arg(args, int);
			char *s = convert(d,16);
			writechars(s);
		}
		if(*format == 'b')
		{
			int d = va_arg(args, int);
			char *s = convert(d,2);
			writechars(s);
		}

		if (*format == 'c')
		{
			_writechar(va_arg(args,int));
		}
		if (*format == 'f')
		{
			double f = va_arg(args,double);
			_writechar(f+'0');
		}

		format++;

	}
}

int main(void)
{
	print("hello %s %d %x %f %c","mikias",-19,100.001,10,'a');	
}
