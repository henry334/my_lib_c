/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** code.c
*/

#include "../../includes/print.h"

char *my_modify(char *array , char *first, char *seconde)
{
    array = (char *) malloc((my_strlen(first, 127) +
        my_strlen(seconde, 127) + 1) * sizeof(char));
    int c = 0;
    int k = 0;
    for (c; first[c] != '\0'; c++) {
        array[c] = first[c];
    }
    for (c; seconde[k] != '\0'; c++, k++) {
        array[c] = seconde[k];
    }
    array[c] = '\0';
    return array;
}
