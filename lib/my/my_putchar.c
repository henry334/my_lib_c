/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_putchar.c
*/

#include "../../includes/print.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
