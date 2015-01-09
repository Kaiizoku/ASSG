/*
 * espacio.cpp
 *
 *  Created on: Jan 7, 2015
 *      Author: kaiizoku
 */

#include "espacio.h"

Espacio::Espacio(SDL_Renderer* render){
	this->render=render;
	SDL_Surface* surface;
	surface=IMG_Load("Others/space3.png");
	texture = SDL_CreateTextureFromSurface(render,surface);
	rectangulo.x=0;
	rectangulo.y=0;
	rectangulo.w=surface->w;
	rectangulo.h=surface->h;
	SDL_FreeSurface(surface);
}

Espacio::~Espacio(){
	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(render);
}

void Espacio::renderizar(){
	SDL_RenderCopy(render,texture,NULL,&rectangulo);
}
