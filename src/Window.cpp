#include "Window.h"
#include <chrono>
#include <cstdio>

namespace Sudo {
namespace Core {

Window::Window() {
	// TODO Auto-generated constructor stub

}

Window::~Window() {
//	glfwTerminate();
}

void Window::init(){

	    /* Initialize the library */
	    if (!glfwInit())
	        exit(-1);

	    /* Create a windowed mode window and its OpenGL context */
	    m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
	    if (!m_Window){
	        glfwTerminate();
	        exit(-1);
	    }

	    /* Make the window's context current */
	    glfwMakeContextCurrent(m_Window);

	    glfwSwapInterval(0);

	    double last = glfwGetTime();
	    int frames = 0;

	    /* Loop until the user closes the window */
	    while (!glfwWindowShouldClose(m_Window))
	    {
	    	double currentTime = glfwGetTime();
	    	     frames++;
	    	     if ( currentTime - last >= 1.0 ){ // If last prinf() was more than 1 sec ago
	    	         // printf and reset timer
	    	         printf("%f frame\n", double(frames));
	    	         frames = 0;
	    	         last += 1.0;
	    	     }
	        /* Render here */
	        glClear(GL_COLOR_BUFFER_BIT);

	        glClearColor(255,0,0,255);

	        /* Swap front and back buffers */
	        glfwSwapBuffers(m_Window);

	        /* Poll for and process events */
	        glfwPollEvents();
	    }

	    glfwTerminate();
}

} /* namespace Core */
} /* namespace Sudo */
