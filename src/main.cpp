#include "Logger.hpp"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>
#include <thread>

const auto bigScreen = sf::Vector2u(1920, 1080);
const auto smallScreen = sf::Vector2u(800, 600);

void renderer(sf::RenderWindow* window) {
	bool success = window->setActive(true);
	if (!success) {
		// TODO: abort?
	}
	while (window->isOpen()) {
		
      window->clear(sf::Color::White);

			// draw sth
			sf::Texture texture("../data/main/random_texture.png");
			sf::Sprite sprite(texture);
			window->draw(sprite);

      window->display();
	}
}

int main() {
  std::cout << "hello from bitterbeat!" << '\n';
  sf::RenderWindow window(sf::VideoMode(smallScreen), "BitterBeat");
  // 60 fps
  window.setFramerateLimit(60);

	Logger::getInstance() << "Hello from logger!";

	bool success = window.setActive(false);
	if (!success) {
		// TODO: abort?
	}

	std::thread rendering_thread(&renderer, &window);

  while (window.isOpen()) {
    // check for events
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      } else if (const auto *keyPressed =
                     event->getIf<sf::Event::KeyPressed>()) {
        if (keyPressed->scancode == sf::Keyboard::Scancode::Escape) {
          window.close();
        }
        if (keyPressed->scancode == sf::Keyboard::Scancode::F) {
          if (window.getSize() == smallScreen) {
            window.setSize(bigScreen);
          } else {
            window.setSize(smallScreen);
          }
        }
      }
    }
  }

	rendering_thread.join();

  return 0;
}
