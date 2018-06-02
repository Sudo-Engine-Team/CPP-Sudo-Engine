/*
 * Logger.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: Timothy
 */

#include "Logger.h"

using namespace Sudo::Core;

Logger::Logger(std::string name){
	this->m_Name = name;
	this->m_Level = ALL;
}

Logger::Logger(){
	this->m_Name = "Sudo";
	this->m_Level = ALL;
};

void Logger::log(LogLevel level, std::string msg){
	if((level >= this->m_Level)){
		return;
	}

	std::cout << "[" << this->m_Name << "] ";

	switch(level){
	case SEVEAR:
		std::cout << "[SEVEAR] " << msg << std::endl;
		break;
	case ERROR:
		std::cout << "[ERROR] " << msg << std::endl;
		break;
	case WARNING:
		std::cout << "[WARNING] " << msg << std::endl;
		break;
	case CONFIG:
		std::cout << "[CONFIG] " << msg << std::endl;
		break;
	case INFO:
		std::cout << "[INFO] " << msg << std::endl;
		break;
	case FINE:
		std::cout << "[FINE] " << msg << std::endl;
		break;
	case FINER:
		std::cout << "[FINER] " << msg << std::endl;
		break;
	case FINEST:
		std::cout << "[FINEST] " << msg << std::endl;
		break;
	default:
		std::cout << "[Log] " << msg << std::endl;
	};
};

void Logger::log(std::string msg){
	log(INFO, msg);
}

void Logger::setLevel(LogLevel level){
	this->m_Level = level;
};
