/*
 * entidad.h
 *
 *  Created on: Jan 8, 2015
 *      Author: kaiizoku
 */

#ifndef ENTIDAD_H_
#define ENTIDAD_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entidad{
public:
	Entidad(SDL_Renderer* renderer, const char* path);
	~Entidad();

	void render();

	/* get */
	int getX();
	int getY();
	int getH();
	int getW();

	/* set */
	void setX(int x);
	void setY(int y);
	void setW(int w);
	void setH(int h);
private:
	SDL_Rect rectangulo;
	SDL_Renderer* renderer;
	SDL_Texture* texture;
};



#endif /* ENTIDAD_H_ */
