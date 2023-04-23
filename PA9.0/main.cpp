#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML Works", sf::Style::Close | sf::Style::Resize);

	sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
	player.setFillColor(sf::Color::Blue);

	/*while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt));
		{
			while (window.waitEvent(evnt))
			{
				switch (evnt.type)
				{
				case sf::Event::Closed:
					window.close();
					break;

				case sf::Event::Resized:
					std::cout << "New Window Width: " << evnt.size.width << "New Window Hight: " << evnt.size.width << std::endl;
					break;

				case sf::Event::TextEntered:
					if (evnt.text.unicode < 128)
					{
						printf("%c", evnt.text.unicode);
					}

				}
			}
		}

	}*/



	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt));
		{

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
			{
				player.move(-0.5f, 0.0f);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
			{
				player.move(0.5f, 0.0f);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
			{
				player.move(0.0f, -0.5f);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
			{
				player.move(0.0f, 0.5f);
			}

			//window.clear();
			window.draw(player);
			window.display();

		}

	}

	return 0;
}