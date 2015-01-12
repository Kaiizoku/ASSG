#include "nave.h"

Nave::Nave(SDL_Renderer* renderer, SDL_Window* pantalla, const char* path) :
		Entidad(renderer,path){
	this->setX(1024/2);
	this->setY(768-this->getH());

	vida = 5;
	vel_x=0;

	for(int i=0;i<=5;i++)
		bala[i] = new Bala(renderer,getX(),getY(),"Others/bala.png");
}

Nave::~Nave(){}

void Nave::renderizar(){
	for(int i=0;i<=5;i++){
		bala[i]->renderizar();
	}

	this->render();
}

void Nave::moverIzquierda(){
	vel_x=-10;
}

void Nave::moverDerecha(){
	vel_x=10;
}

void Nave::disparar(int nrobala){
	if(nrobala>0){
		if(!bala[nrobala]->esDisparada())
			bala[nrobala]->disparar();
		else
			this->disparar(nrobala-1);
	}
}

void Nave::detener(){
	vel_x = 0;
}

void Nave::actualizar(){
	setX(getX()+vel_x);

	if(getX()<0){
		setX(1024-getW());
	}
	else if(getX()>1024-getW()){
		setX(0);
	}

	for(int i=0; i<=5;i++){
			if(!bala[i]->esDisparada()){
				bala[i]->mover(getX()+getW()/2,getY()+getH()/2);
			}
			bala[i]->actualizar();
		}
}
