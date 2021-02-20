CC=g++
CPPFLAGS=`sdl2-config --cflags --libs` -lSDL2_image -IHeaders/


build: Source/bala.o Source/enemigo.o Source/entidad.o Source/espacio.o Source/juego.o Source/nave.o main.o
	$(CC) -o juego Source/bala.o Source/enemigo.o Source/entidad.o Source/espacio.o Source/juego.o Source/nave.o main.o $(CPPFLAGS)

.PHONY: clean

clean:
	rm -f juego main.o Source/*.o
