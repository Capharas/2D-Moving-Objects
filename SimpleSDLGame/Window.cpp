#include "Window.h"



Window::Window(const string& TITLE, const int& WIN_WIDTH, const int& WIN_HEIGHT)
{
	m_window = SDL_CreateWindow(
		TITLE.c_str(),
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WIN_WIDTH,
		WIN_HEIGHT,
		SDL_WINDOW_SHOWN);

	if (m_window == NULL) 
	{
		string* errorMessage = new string("Window could not be created! SDL_Error: %s\n");
		errorMessage->append(SDL_GetError());

		throw errorMessage;
	}

	m_screenSurface = SDL_GetWindowSurface(m_window);
}


Window::~Window()
{
	SDL_DestroyWindow(m_window);
}
