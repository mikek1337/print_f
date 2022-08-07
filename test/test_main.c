#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "../main.h"

int main(void)
{
	int len;
    int len2;
	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
	_printf("hexadecimal:[%x]\n", 64);
	_printf("string and char:[%s,%c]\n", "this is test string",'c');
	_printf("integer: [%d,%d]\n", 1,-1);
	_printf("binary: [%b]\n", 5);
	_printf("octal: [%o]\n", 64);
	 _printf("Negative:[%d]\n", -762534);
	return (0);
}