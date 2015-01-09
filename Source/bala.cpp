#include "bala.h"

Bala::Bala(SDL_Renderer* renderer, int x,int y,const char* path) :
		Entidad(renderer,path){
	disparo=false;
	setX(x);
	setY(y);
}

Bala::~Bala(){

}

void Bala::renderizar(){
	render();
}

void Bala::mover(int x,int y){
	setX(x);
	setY(y);
}

bool Bala::esDisparada(){
	return disparo;
}

void Bala::disparar(){
	disparo=true;
}


void Bala::actualizar(){
	if(disparo){
		setY(getY()-10);
		if(getY()<=0){
			disparo=false;
		}
	}
}

void Bala::colision(Enemigo* e){
	bool colision=false;
	bool coincideX, coincideY=false;

	coincideX=this->getX()+this->getW()>=e->getX()&&this->getX()<=e->getX()+e->getW();
	coincideY=this->getY()<=e->getY()+e->getH()&&this->getY()+this->getH()>=getY();

	colision=coincideX&&coincideY;

	if(colision){
		e->colision();
		disparo=false;
	}
}
