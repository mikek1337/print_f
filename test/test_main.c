#include <stdlib.h>
#include <limits.h>
#include "../main.h"

int main(void)
{
	_printf("hexadecimal:[%x]\n", 64);
	_printf("string and char:[%s,%c]\n", "this is test string",'c');
	_printf("integer: [%d,%d]\n", 1,-1);
	_printf("binary: [%b]\n", 5);
	_printf("octal: [%o]\n", 64);
	return (0);
}