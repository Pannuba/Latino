#ifndef SFONDO_H
#define SFONDO_H

#include "stdafx.h"
#include <SFML\Graphics.hpp>

class Sfondo

{
	public:
		Sfondo();
		void draw(sf::RenderWindow &window);

	private:
		sf::Texture texSfondo;
		sf::Sprite sprSfondo;
};

#endif