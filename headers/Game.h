#pragma once
#include "glew.h"
#include "glfw3.h"
#include "GL/gl.h"
#include "Screen.h"

namespace Sudo{
	class Game{
	private:
		GLFWwindow* window;
		Screen* screen;
		int width = 900, height = 900/16*9;
		const char* title = "Sudo-Engine";
		void init();
		void stop();
	public:
		void run();
		void update();
		void setScreen(Screen* screen);
	};
};
