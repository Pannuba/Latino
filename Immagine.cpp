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

void Immagine::handlekeys()

{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))

	{
		sprLatino.setPosition((sprLatino.getPosition().x) + 10, (sprLatino.getPosition().y) - 10);
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		sprLatino.move(10, 0);

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		sprLatino.move(-10, 0);
}

void Immagine::draw(sf::RenderWindow &window)

{
	window.draw(sprLatino);
}