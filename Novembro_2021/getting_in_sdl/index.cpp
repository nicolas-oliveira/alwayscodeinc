#define _WINDOW_HEIGHT_ 680
#define _WINDOW_WIDTH_  480
#define _GAME_NAME_ "Meu jogo"

#include <SDL2/SDL.h>
#include <iostream>
#include "GameEngineClass.h"

// SIM! TUDO ISSO GERA UMA TELA PRETA!!!
int main() {
	GameEngine engine;

	engine.initWindow();

	if(engine.err == -1) {
		return engine.err;
	}
	
	engine.startLoop();

	engine.exit();

	return 0;
}