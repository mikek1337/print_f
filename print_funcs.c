#include <stdarg.h>
#include "main.h"
/**
 * @file print_funcs.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-08-06
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * p_int - prints integer numbers
 * @l: argument list
 * return: number of characters
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
    s = convert(d, 10);
    return writechars(s);
}

/**
 * p_string - print string
 *
 * @param l
 * @return: number of characters printed
 */
int p_string(va_list l)
{
    char *s;
    s = va_arg(l, char *);
    return writechars(s);
}

/**
 * p_char - prints characters
 *
 * @param l
 * @return: the number of character
 */

int p_char(va_list l)
{
    _writechar(va_arg(l, int));
    return 1;
}

/**
 * @p_binary - prints binary numbers
 *
 * @param l
 * @return: number of characters printed
 */

int p_binary(va_list l)
{
    char *s;
    int d;
    d = va_arg(l, int);
    s = convert(d, 2);
    return writechars(s);
}