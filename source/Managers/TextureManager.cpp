//
// Created by sam on 5/22/21.
//

#include "Managers/TextureManager.h"

#include "Logger.h"
#include "Window.h"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

Texture* TextureManager::createTexture(const char* filepath, int w, int h) {
    Texture* texture = new Texture();
    SDL_Surface* tempSurface;
    tempSurface = IMG_Load(filepath);
    if (tempSurface == 0) {
        tempSurface = SDL_CreateRGBSurface(0, w, h, 32, 0, 0, 0, 0);
        Uint32 color = SDL_MapRGBA(tempSurface->format, 255, 0, 255, 255);
        SDL_FillRect(tempSurface, 0, color);
        Logger::errorTexture(filepath);
    }
    texture->texture = SDL_CreateTextureFromSurface(Window::renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    if (texture->texture) {
        Logger::texture(filepath);
        texture->transformDetails = {0, 0, w, h};
        return texture;
    }
}

void TextureManager::drawTexture(Texture* texture) {
        SDL_RenderCopyEx(Window::renderer, texture->texture, NULL, &texture->transformDetails, texture->angle, &texture->rotationPoint, SDL_FLIP_NONE);
}

void TextureManager::setTexturePosition(Texture* texture, int x, int y) {
    texture->transformDetails.x = x;
    texture->transformDetails.y = y;
}

void TextureManager::setTextureRotationPoint(Texture* texture, int xPos, int yPos) {
    SDL_Point rotationPoint = {xPos, yPos};
    texture->rotationPoint = rotationPoint;
}

void TextureManager::setTextureSize(Texture* texture, int width, int height) {
    texture->transformDetails.w = width;
    texture->transformDetails.h = height;
}
void TextureManager::rotateTexture(Texture* texture, double angle) {
    texture->angle = angle;
}
