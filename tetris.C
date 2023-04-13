#include "tetris.h"
#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main()
{
    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    al_install_keyboard();
    int width = 600, height = 800;

    ALLEGRO_DISPLAY *display = al_create_display(width, height);
    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    ALLEGRO_FONT *font = al_load_font("./fonts/DigitalDare-z4yG.ttf", 30, 20);

    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_display_event_source(display));
    ALLEGRO_EVENT event;
    mainMenuGui(display, font, event_queue, event, width, height);
}

