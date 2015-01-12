/*
 * enemigo.cpp
 *
 *  Created on: Jan 7, 2015
 *      Author: kaiizoku
 */

#include "enemigo.h"

Enemigo::Enemigo(SDL_Renderer* renderer, SDL_Window* pantalla,const char* path) :
			Entidad(renderer,path){
	setY(0);
	setX(rand()%1024+1);
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

	if (direccion>=50&&getX()<=1024-getW()) vel_x=2;
	else if (direccion<50&&getX()>getW()) vel_x=-2;
	else vel_x=0;


	setX(getX()+vel_x);
}

void Enemigo::actualizar(){
	this->mover();
	if(getY()>=768){
		setY(0);
		setX(rand()%1024+1);
	}
}

void Enemigo::colision(){
	setY(0);
	setX(rand()%1024+1);
}
