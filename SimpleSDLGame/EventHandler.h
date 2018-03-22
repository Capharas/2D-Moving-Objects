#ifndef CLASS_SDL_EVENT_HANDLER
#define CLASS_SDL_EVENT_HANDLER

#include <SDL.h>

#include "GameSystem.h"


class EventHandler
{
public:
	EventHandler();
	~EventHandler();

	void handleEvents();

private:
	SDL_Event* m_event;
};

#endif