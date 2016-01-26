#include <SFML\Graphics.hpp>
#include "Level.h"
#include "LevelManager.h"
#include <iostream>
int screenWidth = 1024, screenHeight = 720;
int main(){

	sf::RenderWindow *window = new sf::RenderWindow(sf::VideoMode(screenWidth, screenHeight), "LevelHandlerModule");
	window->setVerticalSyncEnabled(true);


	Level testLevel = Level("test");
	Level testLevel2 = Level("test2");
	LevelManager levelM;
	levelM.addLevel(testLevel);
	levelM.addLevel(testLevel2);

	while (window->isOpen()){

		

		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed){
				window->close();
			}
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Q)
				{
					levelM.nextLevel();
				}
				if (event.key.code == sf::Keyboard::W)
				{
					levelM.changeLevel(4);
				}
				if (event.key.code == sf::Keyboard::E)
				{
					levelM.changeLevel(0);
				}
			}
		}
		
		//testLevel.render(window);

		levelM.render(window);

		window->display();
		

	}

	

	return 0;
}