#pragma once
#include <string>
#include <iostream>
#include <chrono>

namespace Sudo {
namespace Core {

enum LogLevel{
	ALL = 0,
	SEVEAR,
	ERROR,
	WARNING,
	CONFIG,
	INFO,
	FINE,
	FINER,
	FINEST,
};

class Logger {
private:
	std::string m_Name;
	LogLevel m_Level;
public:
	Logger();
	Logger(std::string name);

	void setLevel(LogLevel level);
	LogLevel getLevel() const;

	void log(LogLevel level, std::string msg);
	void log(std::string msg);
};

} /* namespace Core */
} /* namespace Sudo */
