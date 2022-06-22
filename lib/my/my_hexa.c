/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_hexa.c
*/

#include "../../includes/print.h"
#include <stdlib.h>

char check_two(int numm)
{
    char types;
    switch (numm) {
    case 14:
        types = 'e';
        break;
    case 15:
        types = 'f';
        break;
    }
    return types;
}

void check_hexa(int num, int loc, char *list2)
{
    char type;
    switch (num) {
    case 10:
        type = 'a';
        break;
    case 11:
        type = 'b';
        break;
    case 12:
        type = 'c';
        break;
    case 13:
        type = 'd';
        break;
    default:
        type = check_two(num);
        break;
    }
    list2[loc] = type;
}

void my_hexadecimal(int number)
{
    int num_2 = number;
    int hexa = 0;
    int octal = 0;
    char *list = malloc(sizeof(char) * (20));
    int loop = 0;
    for (int counter = number; counter > 0; counter = counter / 16) {
        number = number / 16;
        hexa = num_2 - (number * 16);
        num_2 = number;
        if (hexa >= 10 && hexa <= 15) {
            check_hexa(hexa, loop, list);
        } else {
            list[loop] = hexa + '0';
        }
        loop++;
    }
    my_revstr(list);
    list[loop + 1] = '\0';
    my_putstr(list);
}