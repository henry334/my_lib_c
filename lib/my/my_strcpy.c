/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest , char const *src, char skip, int t)
{
    int x = 0;
    int p = 0;
    for (x; src[x] != '\0'; x++, p++) {
        if (t != 0 && src[x] == skip) {
            t--;
            p--;
        } else
            dest[p] = src[x];
    }
    dest[x] = '\0';
    return dest;
}
