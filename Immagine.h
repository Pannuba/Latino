#ifndef IMMAGINE_H
#define IMMAGINE_H

#include "stdafx.h"
#include <iostream>
#include <SFML\Graphics.hpp>

class Immagine					/* Manipolare posizioni con Vector2f e pos? Salto?*/

{
	public:
		Immagine();
		void handlekeys();
		void draw(sf::RenderWindow &window);

	private:
		sf::Texture texLatino;
		sf::Sprite sprLatino;
		bool isOnBorder();
};

#endif