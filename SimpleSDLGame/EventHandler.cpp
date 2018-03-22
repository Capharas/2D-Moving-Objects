#include "EventHandler.h"



EventHandler::EventHandler()
{
	m_event = new SDL_Event;
}


EventHandler::~EventHandler()
{
	delete(m_event);
}


bool EventHandler::handleEvents()
{
	while (SDL_PollEvent(m_event) != 0)
	{
		if (m_event->type == SDL_QUIT)
			// Will need to change this later
			return true;


		return false;
	}
}