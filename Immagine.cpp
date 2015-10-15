#include "stdafx.h"
#include "Immagine.h"


Immagine::Immagine()

{
	texLatino.setSmooth(true);

	if (!texLatino.loadFromFile("pics\\latino.jpg"))
		std::cerr << "Si è verificato un errore";

	sprLatino.setTexture(texLatino);
	sprLatino.setPosition(0, 450);
}

void Immagine::update()

{
	position = sprLatino.getPosition();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && position.y <= 450)

	{
		std::clog << "\nHaha! Hai premuto spazio!";
		//isGrounded = false;
		
		if (position.y < h)		/* Tutto ciò è un aborto */

		{
			sprLatino.move(v0x * t, (g * (t*t) / 2));
			std::clog << "\nQui dovrebbe cadere\n";
		}

		else
			sprLatino.move(v0x * t, -v0y * t -(g * (t*t) / 2)); /* E no setPosition((spr.getPosition().x) + 10, (spr.getPosition().y) - 10); */
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		sprLatino.move(10, 0);

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		sprLatino.move(-10, 0);

	/*if (Immagine::isOnBorder)

	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			sprLatino.move(-10, 0);

		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			sprLatino.move(10, 0);
	}*/
}

void Immagine::draw(sf::RenderWindow &window)

{
	window.draw(sprLatino);
}