#version 410

in vec2 vTexCoord;

out vec4 FragColor;

uniform sampler2D diffuse;

void main() { 
    FragColor = texture(diffuse,vTexCoord);
}