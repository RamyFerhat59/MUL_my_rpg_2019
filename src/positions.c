/*
** EPITECH PROJECT, 2020
** positions.c
** File description:
** set position for every element
*/

#include "../include/rpg.h"

int text_pos(sfText *text, int x, int y)
{
    sfVector2f text_pos;

    text_pos.x = x;
    text_pos.y = y;
    sfText_setPosition(text, text_pos);
}
