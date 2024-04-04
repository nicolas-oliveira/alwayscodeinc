class GameEngine {
	private: 
		// Sprites
		SDL_Surface *image;
		SDL_Rect     image_position;
		double       image_x;
		double       image_y;

		// Variaveis relativas ao funcionamento da janela
		SDL_Window  *window;
		SDL_Surface *window_surface;
		SDL_Event    window_event;
		bool         keep_window_open;

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

			image = this->load_surface("./sprites/beach.bmp");
			image_position.x = 0;
			image_position.y = 0;
			image_position.y = 22;
			image_position.y = 43;
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
				this->updateAnimation(1.0/30.0);
				this->render();
			}
		}

		SDL_Surface *load_surface(char const *path) {
			SDL_Surface *image_surface = SDL_LoadBMP(path);

			if(!image_surface) {
				printf("Failed to load image at %s: %s\n", path, SDL_GetError());
				err = -1;
				return 0;
			}
			
			return image_surface;
		}

		void updateAnimation(double delta_time) {
    		// image_position.x = image_position.x + (1.0 * delta_time);
			image_x = image_x + (5 * delta_time);
    		image_position.x = image_x;
		}

		void render() {
			SDL_UpdateWindowSurface(window);
			// Limpa a tela
			SDL_FillRect(window_surface, NULL, SDL_MapRGB(window_surface->format, 0, 0, 0));
			SDL_BlitSurface(image, NULL, window_surface, &image_position);
		}

		// Libera a memoria para que o jogo seja fechado
		void exit() {
			SDL_FreeSurface(window_surface);
			SDL_FreeSurface(image);
			SDL_DestroyWindow(window);
		}
};
