#ifndef JUEGO_H_
#define JUEGO_H_

#include <SDL2/SDL.h>

#include "espacio.h"
#include "nave.h"
#include "enemigo.h"

class Juego{
public:
	Juego(const char* titulo, int x, int y);
	~Juego();
	void ejecutar();
private:
	SDL_Window* pantalla;
	SDL_Renderer* render;
	SDL_Event evento;
	bool running;
	int puntos;

	Espacio* espacio;
	Nave* nave;
	Enemigo* enemigo;

	void renderizar();
	void eventos();
	void actualizar();
};

#endif
