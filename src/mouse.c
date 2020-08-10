/*
** EPITECH PROJECT, 2020
** mouse.c
** File description:
** handle the mouse actions
*/

#include "../include/rpg.h"

int check_y_quit(all_t *all, sfEvent *event, sfVector2f mousepos, int y, int j)
{
    if (mousepos.y > y && mousepos.y < j) {
        sfText_setFillColor(all->tf->text_quit, sfRed);
        if (event->type == sfEvtMouseButtonPressed) {
            sfText_setFillColor(all->tf->text_quit, sfGreen);
            destroy(all);
        }
    }
}

int check_y_play(all_t *all, sfEvent *event, sfVector2f mousepos, int y, int j)
{
    if (mousepos.y > y && mousepos.y < j) {
        sfText_setFillColor(all->tf->text_play, sfRed);
        if (event->type == sfEvtMouseButtonReleased)
            sfText_setFillColor(all->tf->text_play, sfGreen);
    }
}

int mouse_rectangle(all_t *all, sfEvent *event, int x, int y, int i, int j)
{
    sfVector2f mousepos;

    mousepos.x = sfMouse_getPosition((sfWindow *) all->window->window).x;
    mousepos.y = sfMouse_getPosition((sfWindow *) all->window->window).y;
    if (y == 220) {
        if (mousepos.x > x && mousepos.x < i && mousepos.y > y && mousepos.y<j)
            check_y_play(all, event, mousepos, y, j);
        else
            sfText_setFillColor(all->tf->text_play, sfWhite);
    } else if (y == 760)
        if (mousepos.x > x && mousepos.x < i && mousepos.y > y && mousepos.y<j)
            check_y_quit(all, event, mousepos, y, j);
        else
            sfText_setFillColor(all->tf->text_quit, sfWhite);
}
