#include "GameSystem.h"


// Static init
bool GameSystem::m_quitGame = false;


void GameSystem::setQuitGame()
{
	m_quitGame = true;
}


bool GameSystem::getQuitGame() 
{
	return m_quitGame;
}