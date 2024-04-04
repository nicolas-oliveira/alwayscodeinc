#define _WINDOW_HEIGHT_ 1080
#define _WINDOW_WIDTH_  720
#define _GAME_NAME_ "Meu jogo"

#include <SDL2/SDL.h>
#include <iostream>
#include "GameEngineClass.h"

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