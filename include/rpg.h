/*
** EPITECH PROJECT, 2020
** rpg.h
** File description:
** the .h file for the rpg
*/

#ifndef _RPG_H_
#define _RPG_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

typedef struct s_window
{
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
} window_t;

typedef struct s_textandfonts
{
    sfText *text;
    sfText *text_play;
    sfText *text_quit;
    sfFont *f1;
    sfFont *f2;
} tfonts_t;

typedef struct s_music
{
    sfMusic *music;
} music_t;

typedef struct s_all
{
    window_t *window;
    tfonts_t *tf;
    music_t *music;
} all_t;

int check_y_quit(all_t *all, sfEvent *event, sfVector2f mousepos, int y, int j);
int check_y_play(all_t *all, sfEvent *event, sfVector2f mousepos, int y, int j);
int mouse_rectangle(all_t *all, sfEvent *event, int x, int y, int i, int j);

int text_pos(sfText *tex, int x, int y);

int init_struct_w(all_t *all, sfVideoMode mode);
int init_struct_tf(all_t *all);
int init_struct_m(all_t *all);
int init_all(all_t *all, sfVideoMode mode);

int destroy(all_t *all);

int display_menu(all_t *all);

int events(all_t *all, sfEvent *event, int close);
int winror(all_t *all);
int loop(all_t *all, sfEvent *event);
int menu();

void my_putchar(char c);
void my_putstr(char *str);
void my_puterr(char d);
void my_putstrerr(char *str);
int my_strcmp(char const *s1, char const *s2);

int main(int ac, char **av);

#endif /* _RPG_H_ */
