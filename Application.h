#ifndef APPLICATION_H
#define APPLICATION_H

#include <SFML/Graphics.hpp>
#include <string>

class Application {
public:
	Application(sf::String caption, unsigned int width, unsigned int height);

public:
	void draw(sf::Drawable& drawable);

	void fill(sf::Color color = sf::Color::Green);
	
	void display();

	void capFPS(int fps);

	void close();


	bool isOpen();
	
	bool pollEvent(sf::Event& e);

	sf::Vector2i getSize();

	sf::String getCaption();
private:
	sf::RenderWindow _window;
	sf::String _caption;
	unsigned int _width, _height;
};

#endif /* APPLICATION_H */