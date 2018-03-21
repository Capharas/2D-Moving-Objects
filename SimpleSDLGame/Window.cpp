#include "Window.h"




// Functions
SDL_Window* createWindow(const string& TITLE, const int& WIN_WIDTH, const int& WIN_HEIGHT);




/////////////
// Methods //
/////////////

Window::Window(const string& TITLE, const int& WIN_WIDTH, const int& WIN_HEIGHT)
{
	m_window = createWindow(TITLE, WIN_WIDTH, WIN_HEIGHT);

	if (m_window == NULL) 
		throw genSDLErrorMsg("Window could not be created! SDL_Error: %s\n");

	m_screenSurface = SDL_GetWindowSurface(m_window);
}


Window::~Window()
{
	SDL_DestroyWindow(m_window);
}




///////////////
// Functions //
///////////////

SDL_Window* createWindow(const string& TITLE, const int& WIN_WIDTH, const int& WIN_HEIGHT)
{
	return SDL_CreateWindow(
		TITLE.c_str(),
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WIN_WIDTH,
		WIN_HEIGHT,
		SDL_WINDOW_SHOWN);
}