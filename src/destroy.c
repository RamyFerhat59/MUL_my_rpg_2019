/*
** EPITECH PROJECT, 2020
** destroy.c
** File description:
** functions to destroy the game elements
*/

#include "../include/rpg.h"

int destroy(all_t *all)
{
    sfMusic_destroy(all->music->music);
    sfText_destroy(all->tf->text);
    sfFont_destroy(all->tf->f1);
    sfFont_destroy(all->tf->f2);
    sfSprite_destroy(all->window->sprite);
    sfTexture_destroy(all->window->texture);
    sfRenderWindow_destroy(all->window->window);
}
