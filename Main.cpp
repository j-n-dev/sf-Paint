/* 
* sf::Paint source code 
* Date of compilation: 29.04.2020
*/

#include "Application.h"
#include "Variables.h"

using namespace std;

int main() {
	/* Define application */
	Application app("sf::Paint", width, height);
	app.capFPS(fpsCap); /* Cap fps to 60 */

	/* Define handy variables */
	sf::Image canvas;
	sf::Vector2i mousePos;
	sf::Texture tcanvas;
	sf::RectangleShape crect;

	canvas.create(width, height);
	tcanvas.create(width, height);
	crect.setSize({ (float)width, (float)height });

	/* Main game loop */
	while (app.isOpen()) {
		/* Poll events */
		sf::Event e;
		while (app.pollEvent(e)) {
			if (e.type == sf::Event::Closed)
				app.close();
		}

		/* Get mouse position */
		mousePos = sf::Mouse::getPosition();

		/* Draw canvas */
		tcanvas.loadFromImage(canvas);
		crect.setTexture(&tcanvas);
		app.draw(crect);

		/* Draw */
		app.fill();
		app.display();

		/* Update canvas */
		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) canvas.setPixel((unsigned int)mousePos.x, (unsigned int)mousePos.y, sf::Color::White);
	}
}