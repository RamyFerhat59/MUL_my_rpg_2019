/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** the main function of the rpg
*/

#include "../include/rpg.h"

void display_help()
{
    my_putstr("MY_PRG\n\n");
    my_putstr("Type ./my_rpg -h to display this help window.\nYou can also");
    my_putstr(" press ./my_rpg and go to the in-game help option\nENJOY!!\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        display_help();
    else if (ac != 1)
        my_putstrerr("Too much arguments, try to rerun with -h\n");
    else
        menu();
    return (0);
}
