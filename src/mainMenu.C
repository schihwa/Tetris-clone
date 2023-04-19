#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>


void mainMenuGui(ALLEGRO_DISPLAY *display, ALLEGRO_FONT *font, ALLEGRO_EVENT_QUEUE *event_queue, ALLEGRO_EVENT event, int width, int height) {
    while (true)
    {
        if (!al_peek_next_event(event_queue, &event))
        {
            printf("hello\n");
        }
        else
        {
            if (event.type == ALLEGRO_EVENT_KEY_DOWN && event.keyboard.keycode == ALLEGRO_KEY_SPACE)
            {
                printf("yeet\n");
            }
            al_drop_next_event(event_queue);
        }

        for (int i = 0; i < 20; i++)
        {
            height--;
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font, al_map_rgb(255, 255, 255), (width / 2), (height / 2), ALLEGRO_ALIGN_CENTER, "Click space bar to play!");
            al_flip_display();
        }

        for (int ix = 0; ix < 20; ix++)
        {
            height++;
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font, al_map_rgb(255, 255, 255), (width / 2), (height / 2), ALLEGRO_ALIGN_CENTER, "Click space bar to play!");
            al_flip_display();
        }
        al_rest(0.05);
    }
}