#ifndef IMMAGINE_H
#define IMMAGINE_H

#include "stdafx.h"
#include <iostream>
#include <SFML\Graphics.hpp>

class Immagine

{
	public:
		Immagine();
		void handlekeys();
		void draw(sf::RenderWindow &window);

	private:
		sf::Texture texLatino;
		sf::Sprite sprLatino;
};

#endif