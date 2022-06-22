/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_hexa_cap.c
*/

#include <stdlib.h>
#include "../../includes/print.h"

char hexadecimal(int numm)
{
    char types;
    switch (numm) {
    case 14:
        types = 'E';
        break;
    case 15:
        types = 'F';
        break;
    }
    return types;
}

void capital_check(int num, int loc, char *list2)
{
    char type;
    switch (num) {
    case 10:
        type = 'A';
        break;
    case 11:
        type = 'B';
        break;
    case 12:
        type = 'C';
        break;
    case 13:
        type = 'D';
        break;
    default:
        type = hexadecimal(num);
        break;
    }
    list2[loc] = type;
}

void my_hexadecimal_capital(int number)
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
        if (hexa >= 10 && hexa <= 15)
            capital_check(hexa, loop, list);
        else
            list[loop] = hexa + '0';
        loop++;
    }
    my_revstr(list);
    list[loop + 1] = '\0';
    my_putstr(list);
}