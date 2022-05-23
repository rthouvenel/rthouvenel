/*
** EPITECH PROJECT, 2021
** MY_H
** File description:
** MY_H
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/types.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include <SFML/Graphics.h>
#include <string.h>
typedef struct sprite {
    sfSprite *sprite;
    sfVector2f origine;
    sfVector2f size;
    sfVector2f scale;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
}sp_t;
#ifndef MY_H_
    #define MY_H_
void create_sp(sp_t *s, char *nf, int x, int y);
float scale(float to, float from);
sfRenderWindow *create_rndr_window(unsigned int x, unsigned int y,
unsigned int pix, char *title);
#endif
