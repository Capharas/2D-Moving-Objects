#include "Window.h"


// constructor
Window::Window(const string& title, const int& height, const int& width)
{
	// init SDL Video
	if (SDL_Init(SDL_INIT_VIDEO) < 0) 
	{
		string errorMsg = "SDL could not initialize! SDL_Error: ";
		errorMsg.append(SDL_GetError());

		throw errorMsg;
	}

	// Create Window
	m_window = createWindow(title, height, width);

}


// destructor
Window::~Window()
{
}




// Functions
SDL_Window* createWindow(const string& title, const int& height, const int& width) {
	return SDL_CreateWindow(
		title.c_str(),
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		height,
		width,
		SDL_WINDOW_SHOWN
	);
}