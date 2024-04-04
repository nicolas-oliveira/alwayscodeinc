class GameEngine {
	private: 
		// Variveis relativas ao funcionamento da janela
		SDL_Window  *window;
		SDL_Surface *window_surface;
		SDL_Event   window_event;
		bool        keep_window_open;

	public:
		int err;
		
		// Testa e instancia a janela no qual o game vai ser renderizado
		void initWindow() {
			if(SDL_Init(SDL_INIT_VIDEO) < 0) {
				std::cout << "Failed to initialize the SDL2 library\n";
				err = -1;
			}

			window = SDL_CreateWindow(
						_GAME_NAME_,
						SDL_WINDOWPOS_CENTERED,
						SDL_WINDOWPOS_CENTERED,
						_WINDOW_HEIGHT_,
						_WINDOW_WIDTH_,
						0
					);

			if(!window) {
				std::cout << "Failed to create window\n";
				err = -1;
			}

			window_surface = SDL_GetWindowSurface(window);

			if(!window_surface) {
				std::cout << "Failed to get the surface from the window\n";
				err = -1;
			}
		}

		// Cria o loop persistente da janela e da fila eventos do SDL
		void startLoop() {
			keep_window_open = true;
			// Loop que mantem a janela aberta
			while(keep_window_open) {
				while(SDL_PollEvent(&window_event) > 0) {
					// Possibilita o SDL fechar a partir do 'x'
					switch(window_event.type) {
						case SDL_QUIT:
							keep_window_open = false;
							break;
					}
				}
				// Funcao responsavel por criar os graficos
				render();
			}
		}

		void render() {
			SDL_UpdateWindowSurface(window);
		}

		// Libera a memoria para que o jogo seja fechado
		void exit() {
			SDL_FreeSurface(window_surface);
			SDL_DestroyWindow(window);
		}
};
