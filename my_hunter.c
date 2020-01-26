/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** hunt
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    sfVideoMode mode = {800, 900, 32};
    sfRenderWindow* wind;
    sfTexture* text;
    sfSprite* spr;
    sfEvent event;
    sfTexture* text2;
    sfClock *clock = sfClock_create();
    sfSprite* spr2;
    sfIntRect rect = {00, 00, 111, 110};
    sfVector2f vct = {30, 0};
    sfVector2f vct2f;
    sfIntRect cana(sfIntRect squ, sfClock *horl, sfSprite *spr, sfVecto\
r2f vect, sfVector2f vect2);
    sfMusic* mus;

    
    wind = sfRenderWindow_create(mode, "my_hunter window", sfResi\
ze \
| sfClose, NULL);

    text = sfTexture_createFromFile("lib/my/src/image.jpg", NULL);
    spr = sfSprite_create();
    sfSprite_setTexture(spr, text, sfTrue);
    text2 = sfTexture_createFromFile("lib/my/src/perso.png", NULL);
    spr2 = sfSprite_create();
    sfSprite_setTexture(spr2, text2, sfTrue);
    mus = sfMusic_createFromFile("lib/my/src/misique.ogg");
    while (sfRenderWindow_isOpen(wind))
    {
	sfMusic_play(mus);
        sfRenderWindow_clear(wind, sfBlack);
        while (sfRenderWindow_pollEvent(wind, &event))
        {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(wind);
        }
        srand(time(NULL));
        sfSprite_setTextureRect(spr2, rect);
        rect = cana(rect, clock, spr2, vct, vct2f);
        sfRenderWindow_drawSprite(wind, spr, NULL);
        sfRenderWindow_drawSprite(wind, spr2, NULL);
        sfRenderWindow_display(wind);
    }
    sfRenderWindow_destroy(wind);
    return(0);
}
