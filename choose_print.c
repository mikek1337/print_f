#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * choose_print - chooses a function form the format
 *
 * @format: format character
 * Return: function pointer
 */
int (*choose_print(char format))(va_list)
{
	pc choose[] = {
		{'i', p_int},
		{'s', p_string},
		{'c', p_char},
		{'d', p_int},
		{'x', p_hex},
		{'X', p_HEX},
		{'b', p_binary},
		{'o', p_octal},
		{'u', p_unsigned},
		{'p', print_address},
		{'r', print_rev},
		{'R', print_rot13},
		{'%', p_percent}
	};
	int choose_list = 12;

	register int i;
	/** loop through and choose the function that match the format */
	for (i = 0; i < choose_list; i++)
		if (choose[i].c == format)
			return (choose[i].f);

	return (NULL);
}
