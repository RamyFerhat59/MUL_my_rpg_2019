/*
** EPITECH PROJECT, 2020
** display.c
** File description:
** display the game
*/

#include "../include/rpg.h"

int display_menu(all_t *all)
{
    sfRenderWindow_clear(all->window->window, sfBlack);
    sfRenderWindow_drawSprite(all->window->window, all->window->sprite, NULL);
    sfRenderWindow_drawText(all->window->window, all->tf->text_play, NULL);
    sfRenderWindow_drawText(all->window->window, all->tf->text_quit, NULL);
    sfRenderWindow_display(all->window->window);
}
