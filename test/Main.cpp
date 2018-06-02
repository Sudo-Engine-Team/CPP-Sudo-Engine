#include "Window.h"
#include "Logger.h"

int main(){
	Sudo::Core::Logger log;
	log.setLevel(Sudo::Core::LogLevel::FINE);
	log.log(Sudo::Core::LogLevel::INFO, "Starting Window");
	log.log(Sudo::Core::LogLevel::CONFIG, "LOADED CONFIG");
	Sudo::Core::Window window;
	window.init();
	return 0;
}
