#version 410

layout(location=0) in vec4 Position;
layout(location=1) in vec4 Normal;

out vec3 vNormal;
out vec4 vPosition;

uniform mat4 ProjectionView;

void main() 
{ 
	vNormal = Normal.xyz;	
	vPosition = Position;
	gl_Position = ProjectionView*Position; 
}