/*
** EPITECH PROJECT, 2022
** epitech
** File description:
** code.c
*/

#include "../../includes/print.h"

int *my_strchr_str(char *string, char *to_check, int pos)
{
    int c = 0;
    int *list = malloc(sizeof(int) * (num_args(string, to_check, -1, pos) + 1));
    for (c; pos < my_strlen(string, 127); pos++) {
        int p = my_check(to_check, pos, string);
        if (p != -1) {
            list[c] = pos;
            c++;
        }
    }
    list[c] = -1;
    return list;
}