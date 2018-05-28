#include "../headers/Game.h"
#include "../headers/Screen.h"
#include <iostream>

using namespace Sudo;

class Test : public Screen{
	virtual void init(){
		std::cout << "INIT" << std::endl;
	};
	virtual void update(float delta){

	};
	virtual void render(){
		glClear(GL_COLOR_BUFFER_BIT);
	};
	virtual void dispose(){

	};
};

int main(){
	Game* game = new Game();

	Screen* screen = new Test();

	game->setScreen(screen);
	game->run();
	delete game;
	delete screen;
	return 0;
}
