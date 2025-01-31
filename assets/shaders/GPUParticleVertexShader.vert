#version 410

layout(location=0) in vec3 Position;
layout(location=1) in vec3 Velocity;
layout(location=2) in float Lifetime;
layout(location=3) in float Lifespan;

out vec3 position;
out float lifetime;
out float lifespan;
out vec2 vTexCoord;

void main() {
	position = Position;
	lifetime = Lifetime;
	lifespan = Lifespan;	
}
