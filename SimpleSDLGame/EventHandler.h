#ifndef CLASS_SDL_EVENT_HANDLER
#define CLASS_SDL_EVENT_HANDLER

#include <SDL.h>



class EventHandler
{
public:
	EventHandler();
	~EventHandler();

	bool handleEvents();

private:
	SDL_Event* m_event;
};

#endif