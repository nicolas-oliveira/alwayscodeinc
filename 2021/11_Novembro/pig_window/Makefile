# https://stackoverflow.com/questions/42881682/linking-sdl-in-a-c-program
UNAME := $(shell uname)

ifeq ($(UNAME),Darvin)
	COMPILER=clang++
else
	COMPILER=g++
endif

FLAGS := -I../include/CPIG

FLAGS_GLOBAL := `sdl2-config --cflags --libs`
FLAGS_GLOBAL += -lSDL2 -lSDL2_ttf -lSDL2_image -lpthread -lwebp

install:
	cd src && $(COMPILER) -o main.o main.cpp $(FLAGS) -w -g $(FLAGS_GLOBAL)

run:
	cd src && ./main.o

debug:
	clear && echo "Entrando no programa de Debug GDB...\nDigite:\n'r'     -> Para executar o programa\n'where' -> Para identificar a linha\n'list'  -> Para mostrar o trecho do código\n'q'     -> Para sair" && gdb -q ./main.o
