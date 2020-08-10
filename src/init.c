/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** initiate the structs
*/

#include "../include/rpg.h"

int init_struct_w(all_t *all, sfVideoMode mode)
{
    all->window->window = sfRenderWindow_create(mode, "my_rpg",
                                                sfResize | sfClose, NULL);
    all->window->texture = sfTexture_createFromFile("doc/pic/bg_menu.png", NULL);
    all->window->sprite = sfSprite_create();
    sfSprite_setTexture(all->window->sprite, all->window->texture, sfTrue);
}

int init_struct_tf(all_t *all)
{
    all->tf->text = sfText_create();
    all->tf->text_play = sfText_create();
    all->tf->text_quit = sfText_create();
    all->tf->f1 = sfFont_createFromFile("doc/fonts/DTM-Mono.otf");
    all->tf->f2 = sfFont_createFromFile("doc/fonts/DTM-Sans.otf");
    sfText_setString(all->tf->text_play, "Play");
    sfText_setFont(all->tf->text_play, all->tf->f1);
    sfText_setCharacterSize(all->tf->text_play, 50);
    sfText_setString(all->tf->text_quit, "Quit");
    sfText_setFont(all->tf->text_quit, all->tf->f1);
    sfText_setCharacterSize(all->tf->text_quit, 50);
}

int init_struct_m(all_t *all)
{
    all->music->music = sfMusic_createFromFile("doc/sounds/start_music.ogg");
}

int init_all(all_t *all, sfVideoMode mode)
{
    all->window = malloc(sizeof(window_t));
    all->tf = malloc(sizeof(tfonts_t));
    all->music = malloc(sizeof(music_t));
    init_struct_w(all, mode);
    init_struct_tf(all);
    init_struct_m(all);
}
