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
		// Init SDL Components
		sdlInit();

		// Create Window
		Window win(TITLE, SCREEN_WIDTH, SCREEN_HEIGHT);

		// wait for 2 sec
		SDL_Delay(2000);

	}
	catch (string* eMsg) 
	{
		printf(eMsg->c_str());
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