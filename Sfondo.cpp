#include "stdafx.h"
#include "Sfondo.h"
#include <iostream>

Sfondo::Sfondo()

{
	texSfondo.setSmooth(true);

	if (!texSfondo.loadFromFile("pics\\sfondo.png"))
		std::cerr << "Si è verificato un errore";
	
	sprSfondo.setTexture(texSfondo);
}

void Sfondo::draw(sf::RenderWindow &window)

{
	window.draw(sprSfondo);
}