#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
//#include <gl_core_4_4.h>
#include <GLFW/glfw3.h>
#include <AntTweakBar.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>

class APP_Inputhandler
{
public:
	//base level for input, apps can override this as wanted	

	//updated as part of the camera tutorial
	static bool keys[];

	static int lastKeyAction;
	static int lastKey;
	static glm::vec2 lastMousePos;
	static bool focused;
	

	//callbacks
	static void OnMouseButton(GLFWwindow*, int b, int a, int m);	
	static void OnMousePosition(GLFWwindow*, double x, double y);
	static void OnMouseScroll(GLFWwindow*, double x, double y);
	static void OnKey(GLFWwindow*, int k, int s, int a, int m);
	static void OnChar(GLFWwindow*, unsigned int c);
	static void OnWindowResize(GLFWwindow*, int w, int h);
	static void OnWindowFocus(GLFWwindow*, int f);
};

#endif INPUTHANDLER_H