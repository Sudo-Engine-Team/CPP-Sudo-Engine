#pragma once
#include "GLFW/glfw3.h"
#include <stdlib.h>

namespace Sudo {
namespace Core {

class Window {
private:
	GLFWwindow* m_Window;
	int m_Width = 900, m_Height = 900/16*9;
	const char* m_Title = "Sudo";
public:
	Window();
	void init();
	virtual ~Window();
};

} /* namespace Core */
} /* namespace Sudo */
