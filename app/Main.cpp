//Using SDL and standard IO
#include <SDL.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char* args[])
{
	SDL_Window* window = SDL_CreateWindow("conjuration", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1080, 720, 0);

	if (!window) 
	{
		std::cout << "failed to construct the window" << std::endl;
	}

	SDL_UpdateWindowSurface(window);

	SDL_Event event;

	auto quit = false;

	while (quit == false)
	{
		SDL_WaitEvent(&event);

		switch (event.type) {

		case SDL_QUIT:
			quit = true;
		}
	}
	return 0;
}