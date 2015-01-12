#ifndef BALA_H_
#define BALA_H_

#include "entidad.h"
#include "enemigo.h"

class Bala : public Entidad{
public:
	Bala(SDL_Renderer* render,int x,int y, const char* path);
	~Bala();

	void renderizar();
	void actualizar();

	void disparar();
	void colision(Enemigo* e);
	void mover(int x, int y);

	bool esDisparada();
private:
	bool disparo;
};


#endif //BALA_H_
