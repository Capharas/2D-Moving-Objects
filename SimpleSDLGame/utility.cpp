#include "utility.h"

string* genSDLErrorMsg(const char* msg)
{
	string* errorMsg = new string(msg);
	errorMsg->append(SDL_GetError());
	return errorMsg;
}