//
// Created by sam on 5/16/21.
//

#include "Window.h"
#include "Logger.h"
#include "SDL.h"
#include "SDL_image.h"

SDL_Renderer* Window::renderer = nullptr;
bool Window::running;

Window::Window(SDL_Window* sdlWindow) {
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        Logger::initialize("Subsystems");
        if (IMG_Init(IMG_INIT_PNG )) {
            Logger::initialize("Image");
        } else {
            Logger::error("Failed to Initialize Image");
        }
    } else {
        Logger::error("Failed to Initialize Subsystems");
    }
    // initialize the variables so errors dont happen
    window = sdlWindow;
}

Window* Window::createWindow(const char* title, int width, int height) {
    SDL_Window* sdlWindow;
    sdlWindow = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);
    if (sdlWindow) {
        Logger::initialize("Window");

        renderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
        if (renderer) {
            Logger::initialize("Renderer");
            running = true;
            SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" );

            Window* gameWindow = new Window(sdlWindow);
            gameWindow->renderer = renderer;

            Logger::log("Started Window");

        } else {
            Logger::error("Failed to Initialize Renderer");
        }
    } else {
        Logger::error("Failed to Initialize Window");
    }
}



void Window::clear() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void Window::render() {
    SDL_RenderPresent(renderer);
}

/*
void Window::setAttribute(Uint32 flag, bool enabled) {
    Uint32 windowFlags = SDL_GetWindowFlags(window);
    Uint32 availableFlags = SDL_WINDOW_FULLSCREEN;
    if(availableFlags & flag) {
        if(windowFlags & flag) {
            if(enabled) {
                Logger::errorAttribute(flag);
            } else {
                // this switch disables the attributes
                switch(flag) {
                    case SDL_WINDOW_FULLSCREEN:
                        SDL_SetWindowFullscreen(window, 0);
                        Logger::attribute(flag, false);
                }
            }
        } else {
            // this switch enabled the attributes
            switch(flag) {
                case SDL_WINDOW_FULLSCREEN:
                    SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP);
                    Logger::attribute(flag, true);
            }
        }
    }
}
 */

Window::~Window() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
};
