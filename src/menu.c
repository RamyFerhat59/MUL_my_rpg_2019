/*
** EPITECH PROJECT, 2020
** menu.c
** File description:
** the main menu of the rpg
*/

#include "../include/rpg.h"

int events(all_t *all, sfEvent *event, int close)
{
    while (sfRenderWindow_pollEvent(all->window->window, event)) {
        close |= (event->type == sfEvtClosed) ? 1 : 0;
        close |= (event->type == sfEvtMouseButtonReleased) ? 7 : 0;
        return (close);
    }
}

int winror(all_t *all)
{
    int err = 0;

    err |= (!all->window->window) ? 84 : 0;
    err |= (!all->window->texture) ? 84 : 0;
    err |= (!all->window->sprite) ? 84 : 0;
    err |= (!all->tf->text) ? 84 : 0;
    err |= (!all->tf->f1) ? 84 : 0;
    err |= (!all->tf->f2) ? 84 : 0;
    err |= (!all->music->music) ? 84 : 0;
    return (err);
}

int loop(all_t *all, sfEvent *event)
{
    int close = 0;

    while (sfRenderWindow_isOpen(all->window->window)) {
        close = events(all, event, close);
        if (close == 1)
            break;
        text_pos(all->tf->text_play, 895, 220);
        text_pos(all->tf->text_quit, 895, 760);
        mouse_rectangle(all, event, 895, 220, 1020, 270);
        mouse_rectangle(all, event, 895, 760, 1020, 810);
        display_menu(all);
    }
    destroy(all);
}

int menu()
{
    sfVideoMode mode = {1280, 720, 32};
    all_t all;
    sfEvent event;

    init_all(&all, mode);
    if (winror(&all) == 84)
        return (84);
    sfMusic_play(all.music->music);
    sfMusic_setLoop(all.music->music, sfTrue);
    loop(&all, &event);
}
