#include "Game.hpp"

#include <thread>

#include "Logger.hpp"

static void renderer(sf::RenderWindow* window) {
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

Game::Game() :
    fps{60},
    smallScreenResolution(800, 600),
    bigScreenResolution(1920, 1080),
    window(sf::VideoMode(smallScreen), "BitterBeat") {
  Logger::getInstance() << "Game is starting!";
  window.setFramerateLimit(fps);
  start();
}

void Game::start() {
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
      } else if (const auto* keyPressed =
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
}
