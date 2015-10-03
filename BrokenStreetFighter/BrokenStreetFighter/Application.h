// BrokenStreetFighter
// ADGS Game Jam - October 2015
// Dean, Matt & Sidney
// ===============================
// Application.h

#ifndef APPLICATION_H
#define APPLICATION_H

#include "ApplicationDefines.h"
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include "AnimatedSprite.hpp"
#include "Player.h"

class Application {
public:
	Application();
	~Application();

	void Run();

protected:


private:
	void Initialise();

	void ManageEvents(sf::RenderWindow* window);
	void Process(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);

	void DetectCollisions();
	bool GetCollision(Player p1, Player p2);

	InputHandler hInput;

	Player Players[PLAYER_COUNT];

	e_GameState currentState;
	e_WinState winState;

	bool fullscreen;
	
	sf::Clock frameClock;
	sf::Time frameTime;
};

#endif