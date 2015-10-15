#ifndef IMMAGINE_H
#define IMMAGINE_H

#include "stdafx.h"
#include <iostream>
#include <SFML\Graphics.hpp>

class Immagine

{
	public:
		Immagine();
		void update();
		void draw(sf::RenderWindow &window);

	private:
		sf::Texture texLatino;
		sf::Sprite sprLatino;
		sf::Vector2f position;		/* spr.getPosition().x = position.x */
		sf::Vector2f v = sf::Vector2f(12, 21);		/* Convertire tutto in vettori, vado a */
		float a = 0;					/* fare i compiti di fisica */
		bool isGrounded();
};

#endif