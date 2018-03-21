/*
Add Project description later
*/

// includes
#include <SDL.h>
#include <string>
#include <stdio.h>

#include "Window.h"


// Namespaces
using std::string;


// Global Vars
const string TITLE = "Simple Game";
const int SCREEN_HEIGHT = 400;
const int SCREEN_WIDTH = 600;


// Functions
void sdlInit();


// Main
int main( int argc, char* args[])
{
	try 
	{
		bool quitGame = false;
		SDL_Event e;

		// Init SDL Components
		sdlInit();

		// Create Window
		Window win(TITLE, SCREEN_WIDTH, SCREEN_HEIGHT);

		while (!quitGame)
		{
			// Handel events on queue
			while (SDL_PollEvent(&e) != 0)
			{
				// request quit
				if (e.type == SDL_QUIT)
					quitGame = true;
			}
		}

	}
	catch (string* eMsg) 
	{
		printf(eMsg->c_str());

		delete(eMsg);

		SDL_Quit();
		return -1;
	}

	// Shut down components
	SDL_Quit();

	return 0;
}


void sdlInit() 
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) 
	{
		string* errorMsg = new string("SDL could not initialize! SDL_Error: %s\n");
		errorMsg->append(SDL_GetError());

		throw errorMsg;
	}
}