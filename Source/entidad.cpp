/*
 * entidad.cpp
 *
 *  Created on: Jan 8, 2015
 *      Author: kaiizoku
 */

#include "entidad.h"

Entidad::Entidad(SDL_Renderer* renderer, const char* path){
	SDL_Surface* surface;

	this->renderer=renderer;

	surface=IMG_Load(path);

	rectangulo.w=surface->w;
	rectangulo.h=surface->h;

	texture=SDL_CreateTextureFromSurface(renderer,surface);


	SDL_FreeSurface(surface);
}

Entidad::~Entidad(){
	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
}

void Entidad::render(){
	SDL_RenderCopy(renderer,texture,NULL,&rectangulo);
}

int Entidad::getH(){
	return rectangulo.h;
}

int Entidad::getW(){
	return rectangulo.w;
}

int Entidad::getX(){
	return rectangulo.x;
}

int Entidad::getY(){
	return rectangulo.y;
}

void Entidad::setH(int h){
	rectangulo.h=h;
}

void Entidad::setW(int w){
	rectangulo.w=w;
}

void Entidad::setX(int x){
	rectangulo.x=x;
}

void Entidad::setY(int y){
	rectangulo.y=y;
}
