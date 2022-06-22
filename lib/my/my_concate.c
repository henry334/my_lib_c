/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** code.c
*/

#include "../../includes/print.h"

char *my_simple_conc(char *f, char s, char b)
{
    int c = 0;
    int t = 1;
    b != 127 ? t++ : t;
    char *p = malloc(sizeof(char) * (my_strlen(f, 127) + 1 + t));
    for (c; f[c] != '\0'; c++) {
        p[c] = f[c];
    }
    if (b != 127) {
        p[c] = b;
        c++;
    }
    p[c] = s;
    p[c + 1] = '\0';
    return p;
}

char *my_conc(char *f, char *s, char b)
{
    int c = 0;
    int t = 1;
    b != 127 ? t++ : t;
    char *p = malloc(sizeof(char) * (my_strlen(f, 127) +
        my_strlen(s, 127) + t));
    for (c; f[c] != '\0'; c++) {
        p[c] = f[c];
    }
    if (b != 127) {
        p[c] = b;
        c++;
    }
    int l = 0;
    int x = c;
    for (x; s[l] != '\0'; l++, x++) {
        p[x] = s[l];
    }
    p[x] = '\0';
    return p;
}

char *typess(char p, va_list lists)
{
    if (p == 's') {
        return va_arg(lists, char *);
    } else if (p == 'd') {
        return my_intchar(va_arg(lists, int));
    }
    return "";
}

char *my_concate_b(char *s, ...)
{
    va_list lists;
    va_start(lists, s);
    char *buffer;
    buffer = "";
    int counter = 0;
    for (counter; s[counter] != '\0' ; counter++) {
        if (s[counter] == '%') {
            counter += 1;
            buffer = my_conc(buffer, typess(s[counter], lists), 127);
        } else
            buffer = my_simple_conc(buffer, s[counter], 127);
    }
    va_end(lists);
    return buffer;
}
