#include <iostream>
#include "Window.h"
#include "SDL_ttf.h"
#include "Managers/TextureManager.h"
#include "Managers/EventManager.h"
#include "Vector2/Float.h"
#include "Logger.h"

Window* gameWindow;

EventManager eventManager;

Vector2f hello(50, 6);

Texture* optical;

TTF_Font* font;

double amount;
double cool;
bool space_init;

void up() {
    if (event.key.type == SDL_KEYDOWN) {
        if (!space_init) {
            if (event.key.keysym.sym == SDLK_UP) {
                amount += 0.1;
            }

            if (event.key.keysym.sym == SDLK_DOWN) {
                amount -= 0.1;
            }

            if (event.key.keysym.sym == SDLK_LEFT) {
                if (cool <= 0) {
                    space_init = true;
                    amount = 100;
                } else if (cool >= 100) {
                    space_init = true;
                    amount = -100;
                    if (cool >= 100000) {
                        amount = -1000;
                    }
                }
            }
        }
    }
}

int main(int argc, char *argv[]) {
    gameWindow = new Window();

    gameWindow->createWindow("Snake", 800, 800);

    font = TTF_OpenFont("assets/fonts/airal.ttf", 30);

    SDL_Color he = {0, 0, 0, 255};

    TTF_RenderText_Blended(font, "heheheh", he);

    optical = TextureManager::createTexture("assets/images/suss.png", 1250, 1250);
    TextureManager::setTextureRotationPoint(optical, optical->transformDetails.w/2, optical->transformDetails.h/2);
    TextureManager::setTexturePosition(optical, 800/2-optical->transformDetails.w/2, 800/2-optical->transformDetails.h/2);

    eventManager.addCustomEvent("hello", up);

    amount = 0;
    cool = 0;

    while (gameWindow->running) {
        eventManager.doEvents();

        eventManager.doCustomEvents();

        gameWindow->clear();

        //test vectors
        hello.add(Vector2f(1, 0));

        if (space_init) {
            TextureManager::setTextureSize(optical, 1000, 1000);
            if (cool <= 10000) {
                amount = -100;
                if (cool <= 100 && cool >= 0) {
                    TextureManager::setTextureSize(optical, 1250, 1250);
                    space_init = false;
                    cool = 0.2;
                    amount = 0;
                }
            } if (cool == 0) {
                amount = 0;
                cool = 0.2;
            }
            cool += amount;

        } else {
            cool += amount+0.1;
        }

        std::cout << "cool: " << cool << ", amount: " << amount << ", space_init: " << space_init << std::endl;


        TextureManager::rotateTexture(optical, cool);

        TextureManager::drawTexture(optical);


        gameWindow->render();
    }

    return EXIT_SUCCESS;
}
