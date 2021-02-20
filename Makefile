CC=g++
CPPFLAGS=`sdl2-config --cflags --libs` -lSDL2_image -IHeaders/
DEPS=Headers/bala.h Headers/enemigo.h Headers/entidad.h Headers/espacio.h Headers/juego.h Headers/nave.h
OBJ=Source/bala.o Source/enemigo.o Source/entidad.o Source/espacio.o Source/juego.o Source/nave.o main.o

build: $(OBJ)
	$(CC) -o juego $(OBJ) $(CPPFLAGS)

.PHONY: clean

clean:
	rm -f juego main.o Source/*.o
