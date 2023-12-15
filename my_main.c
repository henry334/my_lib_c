/*
** EPITECH PROJECT, 2022
** Epitech
** File description:
** code.c
*/

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "print.h"

void free_double(char **list)
{
    for (size_t i = 0; list[i] != NULL; i++) {
        free(list[i]);
    }
    free(list);
}

int main(int argc, char **argv)
{
    return 0;
}