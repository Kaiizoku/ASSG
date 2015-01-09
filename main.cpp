/*
 * main.cpp
 *
 *  Created on: Jan 3, 2015
 *      Author: kaiizoku
 */

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "juego.h"

int main(int argc, char** argv){
	Juego* juego;
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_JPG);

	juego=new Juego("ASSG: A Shitty Space Game",1024,768);
	juego->ejecutar();

	IMG_Quit();
	SDL_Quit();
}
