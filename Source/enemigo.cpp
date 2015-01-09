/*
 * enemigo.cpp
 *
 *  Created on: Jan 7, 2015
 *      Author: kaiizoku
 */

#include "enemigo.h"

Enemigo::Enemigo(SDL_Renderer* renderer, SDL_Window* pantalla,const char* path) :
			Entidad(renderer,path){
	SDL_GetWindowSize(pantalla,&pantalla_ancho,NULL);

	setY(0);
	setX(rand()%pantalla_ancho+1);
}

Enemigo::~Enemigo(){

}

void Enemigo::renderizar(){
	render();
}

void Enemigo::mover(){
	int vel_x = 0;
	int direccion = 0;

	setY(getY()+2);

	direccion = (rand()%100+1);

	if (direccion>=50) vel_x=2;
	else vel_x=-2;

	setX(getX()+vel_x);
}

void Enemigo::actualizar(){
	this->mover();
}

void Enemigo::colision(){
	setY(0);
	setX(rand()%pantalla_ancho+1);
}
