/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_octal_str.c
*/

#include "../../includes/print.h"

void my_octal2(int number)
{
    int num_2 = number;
    int octaa = 0;
    int loop = 2;
    int num_list[3] = {0, 0, 0};
    for (int counter = number; counter > 0; counter = counter / 8 ) {
        number = number / 8;
        octaa = num_2 - (number * 8);
        num_2 = number;
        num_list[loop] = octaa;
        loop--;
    }
    my_put_nbr(num_list[0]);
    my_put_nbr(num_list[1]);
    my_put_nbr(num_list[2]);
}

void my_octal_str(char const *str)
{
    int x = 0;
    for (x; str[x] != '\0'; x++) {
        if (str[x] < 32 || str[x] >= 127) {
            my_putchar('\\');
            my_octal2(str[x]);
        } else {
            my_putchar(str[x]);
        }
    }
}
