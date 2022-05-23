#include "my.h"
int main()
{
    sfRenderWindow *w = create_rndr_window(1920, 1080, 32, "test_game");
    sfEvent event;
    sfVector2i m;
    sfSprite *s = sfSprite_create();
    int img = 0;
    sp_t *s1 = malloc(sizeof(sp_t));
    create_sp(s1, "first.jpg", 1920, 1080);
    sp_t *s2 = malloc(sizeof(sp_t) * 20);
    create_sp(&s2[0], "q1.png", 1920, 1080);
    create_sp(&s2[1], "rep1.png", 1920, 1080);
    create_sp(&s2[2], "q2.png", 1920, 1080);
    create_sp(&s2[3], "rep2.png", 1920, 1080);
    create_sp(&s2[4], "q3.png", 1920, 1080);
    create_sp(&s2[5], "rep3.png", 1920, 1080);
    create_sp(&s2[6], "q4.png", 1920, 1080);
    create_sp(&s2[7], "rep4.png", 1920, 1080);
    create_sp(&s2[8], "q5.png", 1920, 1080);
    create_sp(&s2[9], "rep5.png", 1920, 1080);
    create_sp(&s2[10], "q6.png", 1920, 1080);
    create_sp(&s2[11], "rep6.png", 1920, 1080);
    create_sp(&s2[12], "q7.png", 1920, 1080);
    create_sp(&s2[13], "rep7.png", 1920, 1080);
    create_sp(&s2[14], "q8.png", 1920, 1080);
    create_sp(&s2[15], "rep8.png", 1920, 1080);
    create_sp(&s2[16], "q9.png", 1920, 1080);
    create_sp(&s2[17], "rep9.png", 1920, 1080);
    create_sp(&s2[18], "q10.png", 1920, 1080);
    create_sp(&s2[19], "rep10.png", 1920, 1080);
    sp_t *s3 = malloc(sizeof(sp_t));
    create_sp(s3, "end.jpg", 1920, 1080);
    sfMusic *m1 = sfMusic_createFromFile("intro.wav");
    sfMusic *m2 = sfMusic_createFromFile("woohoo.wav");
    sfMusic_setVolume(m1, 30);
    sfMusic_setVolume(m2, 100);
    sfMusic_play(m1);
    sfClock *c = sfClock_create();
    sfClock *c2 = sfClock_create();
    sfRenderWindow_setFramerateLimit(w, 60);
    while (sfRenderWindow_isOpen(w)) {
        while (sfRenderWindow_pollEvent(w, &event)) {
            if (event.type == sfEvtClosed || img == 22)
                sfRenderWindow_close(w);
        }
        if (sfTime_asSeconds(sfClock_getElapsedTime(c)) < 13)
            sfRenderWindow_drawSprite(w, s1->sprite, NULL);
        if (sfTime_asSeconds(sfClock_getElapsedTime(c)) >= 13 && img < 20)
            sfRenderWindow_drawSprite(w, s2[img].sprite, NULL);
        if (sfKeyboard_isKeyPressed(sfKeySpace) && sfTime_asMilliseconds(sfClock_getElapsedTime(c2)) > 500) {
            sfClock_restart(c2);
            img++;
        }
        if (img == 20) {
            sfMusic_destroy(m1);
            sfMusic_play(m2);
            img++;
        }
        if (img == 21)
            sfRenderWindow_drawSprite(w, s3->sprite, NULL);
        m = sfMouse_getPositionRenderWindow(w);
        sfRenderWindow_display(w);
        sfRenderWindow_clear(w, sfBlack);
    }
    sfMusic_destroy(m2);
}