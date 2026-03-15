#include <SFML/Graphics.hpp>

const auto bigScreen = sf::Vector2u(1920, 1080);
const auto smallScreen = sf::Vector2u(800, 600);

class Game {
public:
  Game();

private:
  void start();
  const sf::Vector2u smallScreenResolution;
  const sf::Vector2u bigScreenResolution;
  sf::RenderWindow window;
  const unsigned int fps;
};
