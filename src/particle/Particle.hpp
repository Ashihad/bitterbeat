#include "Entity.hpp"

class Particle : public Entity {
public:
	void update(float dt) override;
	
	float scale, scaleRate;
	float opacity, opacityChange;
	float rotation, angularVelocity;
};
