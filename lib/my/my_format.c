/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_format.c
*/

#include "../../includes/print.h"
#include <stdio.h>
#include <stdlib.h>

void display(int ascii, int size)
{
    for (int c = 0; c < size; c++) {
        my_putchar(ascii);
    }
}

int check3(char *s, int counter, char *num)
{
    int cn = 0;
    for (counter; s[counter] >= 48 && s[counter] <= 57; counter++) {
        num[cn] = s[counter];
        cn++;
    }
    num[cn] = '\0';
    return cn;
}

void check2(char *s, int counter, int *count2, va_list list)
{
    int ml = counter;
    counter = counter + 2;
    char *num = malloc(sizeof(char) * (my_strlen(s, 127)));
    int cnt = check3(s, counter, num);
    int where = counter + cnt - 1;
    switch (s[ml + 1]) {
        case '-':
            one(where, 0, s, list);
            display(32, my_getnbr(num) - cnt);
            break;
        case '0':
            display(48, my_getnbr(num) - cnt);
            one(where, 0, s, list);
            break;
        case '+':
            display(32, my_getnbr(num) - cnt - 1);
            my_putchar('+');
            one(where, 0, s, list);
    }
    *count2 = cnt + 2;
}
