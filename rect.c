/*
** EPITECH PROJECT, 2018
** rect
** File description:
** do rect vect
*/

#include "../include/my.h"

sfIntRect cana(sfIntRect squ, sfClock *clock, sfSprite *spr, sfVector2f v\
ect, sfVector2f vect2)
{
    sfVector2f apresoubl;
    sfTime tempse = sfClock_getElapsedTime(clock);
    time_t tim;

    srand((unsigned) (&tim));
    if(tempse.microseconds >= 100000) {
        squ.left += 110;
        sfSprite_move(spr, vect);
        apresoubl = sfSprite_getPosition(spr);
        if (apresoubl.x >= 1900) {
            vect.y = rand() % 1200;
            sfSprite_setPosition (spr, vect);
        }
        if (squ.left >= 330) {
            squ.left = 0;
        }
        sfClock_restart(clock);
    }
    return (squ);
}
