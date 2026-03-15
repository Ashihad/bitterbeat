#include "Particle.hpp"

void Particle::update(float dt) {
	Entity::update(dt);

	scale += scaleRate * dt;
	opacity += opacityChange * dt;
	rotation += angularVelocity * dt;

	// invisible object -> can clean up
	alive = opacity > 0.0f;
}
