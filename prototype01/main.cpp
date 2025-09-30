#include <SDL3/SDL.h>

int main(int argc, char* argv[]) {
	// Initializes SDL_VIDEO
	SDL_Init(SDL_INIT_VIDEO);

	// Creates a SDL Window
	SDL_Window *window;
	window = SDL_CreateWindow("title",600,400,0);

	// Creates a Renderer
	SDL_Renderer* renderer;
	renderer = SDL_CreateRenderer(window,NULL);

	SDL_SetRenderDrawColor(renderer,96,96,96,255);

	// Clears the screen
	SDL_RenderClear(renderer);

	// Draws the screen
	SDL_RenderPresent(renderer);

	SDL_Delay(3000);

	return 0;
}
