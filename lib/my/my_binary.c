/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_binary.c
*/

#include "../../includes/print.h"

int my_binary(long number)
{
    int num = 1;
    int size = my_intlen(number, 2);
    int t;
    long n = 0;
    long nn = 1;
    int *list = malloc(sizeof(int) * size);
    for (number; number > 0; number = number / 2)  {
        if (number % 2 == 1) {
            t = 1;
            n = n + (t * nn);
        } else if (number % 2 == 0) {
            t = 0;
        }
        nn = nn * 10;
        list[num] = t;
        num++;
    }
    my_revint(list, size);
    my_put_nbr(n);
    return n;
}
