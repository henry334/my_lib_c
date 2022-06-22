/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../includes/print.h"

void three(char tp, va_list list,  int *count2)
{
    switch (tp) {
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    case 'd':
        my_put_nbr(va_arg(list, int));
        break;
    case 'b':
        my_binary(va_arg(list, int));
        my_putchar('\n');
        break;
    case '%':
        my_putchar('%');
        break;
    default:
        *count2 = *count2 - 1;
        break;
    }
}

void two(char tp, va_list list, int *count2)
{
    switch (tp) {
    case 'x':
        my_hexadecimal(va_arg(list, int));
        break;
    case 'X':
        my_hexadecimal_capital(va_arg(list, int));
        break;
    case 's':
        my_putstr(va_arg(list, void *));
        break;
    case 'S':
        my_octal_str(va_arg(list, void *));
        break;
    default:
        three(tp, list, count2);
        break;
    }
}

void one(int counter, int *count2, char *s, va_list list)
{
    char tp = s[counter + 1];
    if (tp == '#') {
        my_putstr("0x");
        tp = s[counter + 2];
        *count2 = *count2 + 1;
    }
    switch (tp) {
    case 'c':
        my_putchar(va_arg(list, int));
        break;
    case 'o':
        my_octal(va_arg(list, int));
        break;
    default:
        two(tp, list, count2);
        break;
    }
}

void my_printf(char *s, ...)
{
    va_list list;
    va_start(list, s);
    int counter = 0;
    int count2 = 0;
    for (counter; s[counter] != '\0' ; counter++) {
        if (s[counter] == '%' && s[counter + 1]
            != '+' && s[counter + 1] != '-' && s[counter + 1] != '0') {
            one(counter, &count2, s, list);
            counter = counter + 1 + count2;
        } else if (s[counter] == '%') {
            check2(s, counter, &count2, list);
            counter = counter + count2;
        } else {
            my_putchar(s[counter]);
        }
        count2 = 0;
    }
    va_end(list);
}
