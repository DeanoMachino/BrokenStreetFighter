// BrokenStreetFighter
// ADGS Game Jam - October 2015
// Dean, Matt & Sidney
// ===============================
// Application.h

#ifndef APPLICATION_H
#define APPLICATION_H
#include "ApplicationDefines.h"
class Application {
public:
	Application();
	~Application();

	void Run();

protected:


private:
	e_GameState CurrentState;
	void Initialise();
	void GetInput();
	void Process(e_GameState CurrentState);
	void Render(e_GameState CurrentState);

};

#endif