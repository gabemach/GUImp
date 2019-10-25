//#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_timer.h"
#include "SDL_ttf.h"
#include <stdio.h>
#include <stdint.h>

/*
 * Lesson 0: Test to make sure SDL is setup properly
 */
int main(void)
{
    SDL_Window      *back_window;
    SDL_Event       events;
    int             quit;
    back_window = NULL;
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        printf("There was an error initializing the window!\n");
    back_window = SDL_CreateWindow("Lesson 2!", 100, 100, 640, 640, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    if (back_window == NULL)
    {
        printf("There was an error creating the window!\n");
        SDL_Quit();
    }
    SDL_Renderer    *renderer = SDL_CreateRenderer(back_window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
    SDL_SetRenderDrawColor(renderer, 100, 100, 100, 255);
    SDL_RenderClear(renderer);
    quit = 0;
    while (quit == 0)
    {
        SDL_RenderClear(renderer);
        while (SDL_PollEvent(&events))
        {
            if (events.type == SDL_QUIT)
                quit = 1;
        }
        SDL_RenderPresent(renderer);
        SDL_Delay(90);
    }
    return (0);
}