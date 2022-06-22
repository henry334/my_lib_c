/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_getnbr.c
*/

#include "../../includes/print.h"

int isneg(int nbr, int neg)
{
    if (neg % 2 == 0)
        return nbr;
    else
        return nbr * (-1);
}

int my_getnbr2(long nbr, int neg, int counter)
{
    nbr = isneg(nbr, neg);
    return nbr;
}

int my_getnbr(char const *str)
{
    int len = my_strlen(str, 127);
    int neg = 0;
    long nbr = 0;
    int counter = 0;
    for (counter; counter < len; counter++) {
        if (str[counter] >= 48 && str[counter] < 48 + 10) {
            nbr = nbr * 10 + ((int) str[counter] - 48);
        } else {
            return my_getnbr2(nbr, neg, counter);
        }
    }
    return my_getnbr2(nbr, neg, counter);
}