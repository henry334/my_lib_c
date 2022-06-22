/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_revstr.c
*/

int my_strsize(char const *str)
{
    int x = 0;
    while (*str != '\0' ) {
        x++;
        str++;
    }
    return x;
}

char *my_revstr(char *str)
{
    char suite;
    int y = 0;
    int v = my_strsize(str) - 1;
    while (v > y) {
        suite = str[y];
        str[y] = str[v];
        str[v] = suite;
        y = y + 1;
        v = v - 1;
    }
    return str;
}

int *my_revint(int *i, int size)
{
    char suite;
    int y = 0;
    int v = size;
    while (v > y) {
        suite = i[y];
        i[y] = i[v];
        i[v] = suite;
        y = y + 1;
        v = v - 1;
    }
    return i;
}
