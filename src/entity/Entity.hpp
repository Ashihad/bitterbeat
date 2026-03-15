#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "World.hpp"

class Entity {
public:
  virtual ~Entity() = default;
  virtual void update(float dt);
  virtual void draw(sf::RenderTarget& target);

  World& world;
  bool alive = true;

  sf::Vector2f& get_position();
  sf::Vector2f& get_velocity();
  sf::Vector2f& get_acceleration();

private:
  sf::Vector2f position;
  sf::Vector2f velocity;
  sf::Vector2f acceleration;
};
