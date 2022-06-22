/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** the_code
*/

#include "../../includes/print.h"

char *char_tostr(char c)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = c;
    str[1] = '\0';
    return str;
}