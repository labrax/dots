
#pragma once

#include "defines.hpp"

/* If using gl3.h */
/* Ensure we are using opengl's core profile only */
#define GL3_PROTOTYPES 1
#include <GL/gl.h>
#include <SDL2/SDL.h>

void sdldie(const char *msg);
void checkSDLError(int line);

class Graphics {
    SDL_Window *mainwindow;
    SDL_GLContext maincontext;
public:
    Graphics();
    ~Graphics();

    void run();  
};
