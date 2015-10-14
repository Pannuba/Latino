#ifndef MENU_H
#define MENU_H

#include "stdafx.h"
#include <SFML\Graphics.hpp>

class Menu

{
	public:
		Menu();
		void draw(sf::RenderWindow &window);
		void handlekeys(sf::RenderWindow &window);
		bool wasShown = false;

	private:
		sf::Texture texMenu;
		sf::Sprite sprMenu;
		sf::Texture texFreccia;
		sf::Sprite sprFreccia;
};

#endif