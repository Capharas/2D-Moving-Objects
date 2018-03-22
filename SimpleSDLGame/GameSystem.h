#ifndef CLASS_GAME_SYSTEM
#define CLASS_GAME_SYSTEM

class GameSystem
{
public:
	static void setQuitGame();
	static bool getQuitGame();

private:
	static bool m_quitGame;
};


#endif