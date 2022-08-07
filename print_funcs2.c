#include <stdarg.h>
#include "main.h"
/**
 * @file print_funcs2.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * p_hex - prints hex characters
 *
 * @param l
 * @return: number of characters printed
 */
int p_hex(va_list l)
{
    int d;
    char *s;
    d = va_arg(l, unsigned int);
    s = convert(d, 16);
    return writechars(s);
}
/**
 * p_octal - prints octal characters
 * 
 * @param l
 * @return: number of characters printed
 */
int p_octal(va_list l)
{
    int d;
    char *s;
    d = va_arg(l, unsigned int);
    s = convert(d, 8);
    return writechars(s);
}
