#ifndef CLASS_SDL2_WINDOW
#define CLASS_SDL2_WINDOW

#include <SDL.h>
#include <string>

using std::string;




class Window
{
public:
	Window(const string& title, const int& height, const int& width);
	~Window();


private:
	SDL_Window * m_window;
	SDL_Surface * m_surface;


};





#endif