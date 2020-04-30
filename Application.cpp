#include "Application.h"

Application::Application(sf::String caption, unsigned int width, unsigned int height) : _caption(caption), _width(width), _height(height)
{
	_window.create({ width, height }, caption);
}


void Application::draw(sf::Drawable& drawable) {
	_window.draw(drawable);
}

void Application::fill(sf::Color color) {
	_window.clear(color);
}

void Application::display() {
	_window.display();
}

void Application::capFPS(int fps) {
	_window.setFramerateLimit((unsigned int)fps);
}

void Application::close() {
	_window.close();
}


bool Application::isOpen() {
	return _window.isOpen();
}

bool Application::pollEvent(sf::Event& e) {
	return _window.pollEvent(e);
}

sf::Vector2i Application::getSize() {
	return { (int)_width, (int)_height };
}

sf::String Application::getCaption() {
	return _caption;
}