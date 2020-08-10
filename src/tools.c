/*
** EPITECH PROJECT, 2020
** tools.c
** File description:
** all the usefull functions
*/

#include "../include/rpg.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (; *str != '\0'; str++)
        my_putchar(*str);
}

void my_puterr(char d)
{
    write(2, &d, 1);
}

void my_putstrerr(char *str)
{
    for (; *str != '\0'; str++)
        my_puterr(*str);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] != '\0';) {
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] == s2[i])
            i++;
        else if (s1[i] > s2[i])
            return (1);
    }
    return (0);
}
