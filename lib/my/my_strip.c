/*
** EPITECH PROJECT, 2022
** epitech
** File description:
** code.c
*/

#include "../../includes/print.h"

int int_strip(int mode, int num, int parse, int c)
{
    if (mode == 0 && num == parse)
        return 1;
    else if (mode == 1 && c == parse)
        return 50;
    return 0;
}

int *my_intstrip(int mode, int *buff, int size, int parse)
{
    int t;
    int x;
    int lock;
    int *temp = malloc(sizeof(int) * (size + 1));
    lock = 0;
    t = 0;
    for (int c = 0; buff[c] != -1; c++) {
        x = lock == 0 ? int_strip(mode, buff[c], parse, c) : 40;
        if (x == 1) {
        } else if (x == 50) {
            lock = 50;
        } else {
            temp[t] = buff[c];
            t++;
        }
    }
    temp[t] = -1;
    return temp;
}

char *my_strip(char *string, char *parse, int num)
{
    int c = 0;
    int t = 0;
    int lock;
    int max = 1;
    my_strlen(parse, 127) == 1 ? max++ : max;
    char *new = malloc(sizeof(char) *
        (my_strlen(string, 127) - num_args(string, parse, 0, 0) + max + num));
    for (c; string[t] != '\0'; t++) {
        lock = my_check(parse, t, string);
        lock != - 1 ? num-- : num;
        if (lock != -1 && num < 0) {
            t = t + lock - 1;
        } else {
            new[c] = string[t];
            c++;
        }
    }
    new[c] = '\0';
    return new;
}
