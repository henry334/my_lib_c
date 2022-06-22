/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** print.h
*/

#ifndef PRINT_H_
    #define PRINT_H_
    #include <stddef.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <sys/syscall.h>
    #include <fcntl.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/stat.h>

int my_put_nbr(int);
char *char_tostr(char c);
char *readfile(char *path);
char *my_concate_b(char *s, ...);
char *my_simple_conc(char *f, char s, char b);
int my_charint(char *buffer);
void my_printf(char *, ...);
void my_putchar(char);
int my_intlen(long long number, int div);
char *my_intchar(long long num);
int my_putstr(char const *);
int my_strlen(char const *, char skip);
int *my_intstrip(int mode, int *buff, int size, int parse);
int size_args(char *argv, int where, char *parse, int t);
char **my_split(char *argv, char *parse, int skip);
int *my_strchr_str(char *string, char  *to_check, int pos);
void my_octal(int);
char *my_strdup(char *to_copy);
int num_args(char *, char *, int, int where);
int my_check(char *parse, int where, char *string);
char *my_conc(char *, char *, char);
char *my_modify(char *, char *, char *);
int my_twod_size(char **temp);
char *my_strip(char *sentence, char *strip, int skip);
int my_binary(long);
int *my_revint(int *, int);
int my_strcomp(char *, char *);
void my_octal_str(char const *);
char *my_revstr(char *);
void my_hexadecimal(int);
void my_hexadecimal_capital(int);
void one(int, int *, char *, va_list);
int my_getnbr(char const *);
void check2(char *, int , int *, va_list );

#endif /*PRINT_H_*/
