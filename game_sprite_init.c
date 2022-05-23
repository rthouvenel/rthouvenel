/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** my_rpg
** create an RPG game
*/

#include "my.h"

void create_sp(sp_t *s, char *nf, int x, int y)
{
    s->texture = sfTexture_createFromFile(nf, NULL);
    s->sprite = sfSprite_create();
    s->position.x = 0;
    s->position.y = 0;
    s->scale.x = scale(1920, x);
    s->scale.y = scale(1080, y);
    sfSprite_setScale(s->sprite, s->scale);
    sfSprite_setPosition(s->sprite, s->position);
    sfSprite_setTexture(s->sprite, s->texture, sfTrue);
}
