/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_octal.c
*/

#include "../../includes/print.h"

void my_octal(int number)
{
    int num_2 = number;
    int octaa = 0;
    int loop = 1;
    int octal = 0;
    for (int counter = number; counter > 0; counter = counter / 8) {
        number = number / 8;
        octaa = num_2 - (number * 8);
        num_2 = number;
        octal = octal + octaa * loop;
        loop = loop * 10;
    }
    my_put_nbr(octal);
}