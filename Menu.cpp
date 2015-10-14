#include "stdafx.h"
#include "Menu.h"
#include <iostream>

Menu::Menu()

{
	texMenu.setSmooth(true);

	if (!texMenu.loadFromFile("pics\\menu.png"))
		std::cerr << "Si è verificato un errore";

	sprMenu.setTexture(texMenu);

	texFreccia.setSmooth(true);

	if (!texFreccia.loadFromFile("pics\\freccia.png"))
		std::cerr << "Si è verificato un errore";

	sprFreccia.setTexture(texFreccia);
	sprFreccia.setPosition(100, 250);
}

void Menu::handlekeys(sf::RenderWindow &window)

{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		sprFreccia.setPosition(100, 500);

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		sprFreccia.setPosition(100, 250);
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
		wasShown = true;

	/*else
		window.close(); //Help*/
}

void Menu::draw(sf::RenderWindow &window)

{
	window.draw(sprMenu);
	window.draw(sprFreccia);
}