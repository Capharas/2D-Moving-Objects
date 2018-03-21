#ifndef CLASS_SDL_WINDOW
#define CLASS_SDL_WINDOW

#include <SDL.h>
#include <string>

#include "utility.h"

using std::string;


class Window
{
public:
	Window(const string& TITLE, const int& WIN_WIDTH, const int& WIN_HEIGHT);
	~Window();

private:

	SDL_Window * m_window = NULL;
	SDL_Surface * m_screenSurface = NULL;


};




#endif