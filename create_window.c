/*
** EPITECH PROJECT, 2021
** MY_H
** File description:
** MY_H
*/
#include "my.h"

sfRenderWindow *create_rndr_window(unsigned int x, unsigned int y,
unsigned int pix, char *title)
{
    sfVideoMode video_mode = {x, y, pix};
    return (sfRenderWindow_create(video_mode,
    title,
    sfResize | sfClose,
    NULL));
}
