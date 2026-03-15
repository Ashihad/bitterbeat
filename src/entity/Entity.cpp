#include "Entity.hpp"

sf::Vector2f& Entity::get_position() {
  return position;
}
sf::Vector2f& Entity::get_velocity() {
  return velocity;
}
sf::Vector2f& Entity::get_acceleration() {
  return acceleration;
}

void Entity::update(float dt) {
  position += velocity * dt;
  velocity += acceleration * dt;
}
