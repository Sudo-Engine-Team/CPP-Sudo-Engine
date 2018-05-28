#include "../headers/Game.h"
#include  <stdlib.h>

using namespace Sudo;

void Game::run(){
	init();
	while(!glfwWindowShouldClose(this->window)){
		this->screen->update(0.0001f);
		this->screen->render();
		glfwSwapBuffers(this->window);
		glfwPollEvents();
	}
	stop();
}

void Game::init(){
	if(!glfwInit()){
		exit(-1);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,2);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	this->window = glfwCreateWindow(width, height, title, NULL, NULL);

	if(!window){
		glfwTerminate();
		exit(-1);
	}

	glfwMakeContextCurrent(this->window);

	if(glewInit() != GLEW_OK){
		exit(-1);
	}

	this->screen->init();
}

void Game::stop(){
	this->screen->dispose();
	glfwTerminate();
};

void Game::setScreen(Screen* screen){
	if(this->screen != nullptr){
		this->screen->dispose();
		screen->init();
	}
	this->screen = screen;
};
