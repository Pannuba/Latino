#include "stdafx.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Immagine.h"
#include "Sfondo.h"
#include "Menu.h"

int main(){

	sf::RenderWindow window(sf::VideoMode(1280, 720), "Latino", sf::Style::Close);
	window.setVerticalSyncEnabled(true);
	window.setActive();
	Immagine immagine;
	Sfondo sfondo;
	Menu menu;
	
	sf::Music music;
	
	if (!music.openFromFile("audio\\Hello.ogg"))
		std::cerr << "\ncannot open music";

	music.play();

	while (window.isOpen())

	{
		immagine.handlekeys();
		
		sf::Event event;

		while (window.pollEvent(event))

		{

			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		window.clear();

		if (menu.wasShown == false)

		{
			menu.draw(window);
			menu.handlekeys(window);
		}
		
		else

		{
			sfondo.draw(window);
			immagine.draw(window);
		}
			
		window.display();
	}

	return EXIT_SUCCESS;
}