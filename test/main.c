#include <stdio.h>
#include "../main.h"
/**
 *  * main - test for NULL string
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	_printf("Test: %r\n", "mikias");
	_printf("%R\n","ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	_printf("%R\n","abcdefghijklmnopqrstuvwxyz");
	return (0);
}
