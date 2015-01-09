/*
 * espacio.h
 *
 *  Created on: Jan 7, 2015
 *      Author: kaiizoku
 */

#ifndef ESPACIO_H_
#define ESPACIO_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Espacio{
public:
	Espacio(SDL_Renderer* render);
	~Espacio();
	void renderizar();
private:
	SDL_Renderer* render;
	SDL_Texture* texture;
	SDL_Rect rectangulo;
};


#endif /* ESPACIO_H_ */
