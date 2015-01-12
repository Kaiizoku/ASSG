#ifndef NAVE_H_
#define NAVE_H_

#include "entidad.h"
#include "bala.h"

class Nave : public Entidad{
public:
	Nave(SDL_Renderer* renderer, SDL_Window* pantalla,const char* path);
	Nave(const Nave&);
	~Nave();

	void renderizar();
	void actualizar();

	void moverIzquierda();
	void moverDerecha();
	void detener();

	void disparar(int nrobala);

	Bala* bala[5];
private:
	int vida,pos_x,vel_x;

};

#endif //NAVE_H_
