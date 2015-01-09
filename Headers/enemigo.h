/*
 * enemigo.h
 *
 *  Created on: Jan 7, 2015
 *      Author: kaiizoku
 */

#ifndef ENEMIGO_H_
#define ENEMIGO_H_

#include "entidad.h"

class Enemigo : public Entidad{
public:
	Enemigo(SDL_Renderer* render,SDL_Window* pantalla,const char* path);
	~Enemigo();

	void renderizar();
	void actualizar();

	void colision();
private:
	void mover();
	int pantalla_ancho;
};


#endif /* ENEMIGO_H_ */
