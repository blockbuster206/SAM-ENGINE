//
// Created by sam on 5/22/21.
//

#include "Logger.h"
#include "iostream"
#include "SDL2/SDL.h"

void Logger::log(const char* message) {
    std::cout << "Log: " << message << std::endl;
}

void Logger::initialize(const char* initMessage) {
    std::cout << "Initialized: " << initMessage << std::endl;
}

void Logger::texture(const char *filepath) {
    std::cout << "Loaded: " << filepath << std::endl;
}

void Logger::errorTexture(const char *filepath) {
    std::cout << "UH OH: Couldn't texture " << filepath << "!" << std::endl;
}

void Logger::attribute(Uint32 flag, bool enabled) {
    if(enabled) {
        std::cout << "Attribute: Enabled " << flag << std::endl;
    } else {
        std::cout << "Attribute: Disabled " << flag << std::endl;
    }

}

void Logger::errorAttribute(Uint32 flag) {
    std::cout << "UH OH: ALready enabled " << flag << "!" << std::endl;
}

void Logger::error(const char* errorMessage) {
    std::cout << "UH OH: " << errorMessage << "!" << std::endl;
}

void Logger::errorSDL(const char* errorMessage) {
    std::cout << "UH OH: " << errorMessage << "!" << SDL_GetError() << std::endl;
}

