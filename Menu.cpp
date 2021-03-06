#include "stdafx.h"
#include "Menu.h"
#include <iostream>

Menu::Menu()

{
	texMenu.setSmooth(true);

	if (!texMenu.loadFromFile("pics\\menu.png"))
		std::cerr << "Si � verificato un errore";

	sprMenu.setTexture(texMenu);

	texFreccia.setSmooth(true);

	if (!texFreccia.loadFromFile("pics\\freccia.png"))
		std::cerr << "Si � verificato un errore";

	sprFreccia.setTexture(texFreccia);
	sprFreccia.setPosition(100, 250);
}

void Menu::handlekeys(sf::RenderWindow &window)

{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))

	{
		sprFreccia.setPosition(100, 500);
		isOnPlay = false;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))

	{
		sprFreccia.setPosition(100, 250);
		isOnPlay = true;
	}
	
	if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) && isOnPlay == true)
		wasShown = true;

	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) && isOnPlay == false)
		window.close();
}

void Menu::draw(sf::RenderWindow &window)

{
	window.draw(sprMenu);
	window.draw(sprFreccia);
}